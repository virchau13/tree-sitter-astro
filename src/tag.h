#include "tree_sitter/parser.h"
#include <assert.h>
#include <string.h>

typedef enum {
    AREA,
    BASE,
    BASEFONT,
    BGSOUND,
    BR,
    COL,
    COMMAND,
    EMBED,
    FRAME,
    HR,
    IMAGE,
    IMG,
    INPUT,
    ISINDEX,
    KEYGEN,
    LINK,
    MENUITEM,
    META,
    NEXTID,
    PARAM,
    SOURCE,
    TRACK,
    WBR,
    END_OF_VOID_TAGS,

    A,
    ABBR,
    ADDRESS,
    ARTICLE,
    ASIDE,
    AUDIO,
    B,
    BDI,
    BDO,
    BLOCKQUOTE,
    BODY,
    BUTTON,
    CANVAS,
    CAPTION,
    CITE,
    CODE,
    COLGROUP,
    DATA,
    DATALIST,
    DD,
    DEL,
    DETAILS,
    DFN,
    DIALOG,
    DIV,
    DL,
    DT,
    EM,
    FIELDSET,
    FIGCAPTION,
    FIGURE,
    FOOTER,
    FORM,
    H1,
    H2,
    H3,
    H4,
    H5,
    H6,
    HEAD,
    HEADER,
    HGROUP,
    HTML,
    I,
    IFRAME,
    INS,
    KBD,
    LABEL,
    LEGEND,
    LI,
    MAIN,
    MAP,
    MARK,
    MATH,
    MENU,
    METER,
    NAV,
    NOSCRIPT,
    OBJECT,
    OL,
    OPTGROUP,
    OPTION,
    OUTPUT,
    P,
    PICTURE,
    PRE,
    PROGRESS,
    Q,
    RB,
    RP,
    RT,
    RTC,
    RUBY,
    S,
    SAMP,
    SCRIPT,
    SECTION,
    SELECT,
    SLOT,
    SMALL,
    SPAN,
    STRONG,
    STYLE,
    SUB,
    SUMMARY,
    SUP,
    SVG,
    TABLE,
    TBODY,
    TD,
    TEMPLATE,
    TEXTAREA,
    TFOOT,
    TH,
    THEAD,
    TIME,
    TITLE,
    TR,
    U,
    UL,
    VAR,
    VIDEO,
    // Technically not a 'tag' as such, but rather Astro's curly brace
    // interpolations.
    INTERPOLATION,

    CUSTOM,

    END_,
} TagType;

typedef struct {
    uint32_t len;
    uint32_t cap;
    char *data;
} String;

typedef struct {
    char tag_name[16];
    TagType tag_value;
} TagMap;

typedef struct {
    TagType type;
    String custom_tag_name;
} Tag;

const TagMap TAG_TYPES_BY_TAG_NAME[] = {
    {"area",       AREA      },
    {"base",       BASE      },
    {"basefont",   BASEFONT  },
    {"bgsound",    BGSOUND   },
    {"br",         BR        },
    {"col",        COL       },
    {"command",    COMMAND   },
    {"embed",      EMBED     },
    {"frame",      FRAME     },
    {"hr",         HR        },
    {"image",      IMAGE     },
    {"img",        IMG       },
    {"input",      INPUT     },
    {"isindex",    ISINDEX   },
    {"keygen",     KEYGEN    },
    {"link",       LINK      },
    {"menuitem",   MENUITEM  },
    {"meta",       META      },
    {"nextid",     NEXTID    },
    {"param",      PARAM     },
    {"source",     SOURCE    },
    {"track",      TRACK     },
    {"wbr",        WBR       },
    {"a",          A         },
    {"abbr",       ABBR      },
    {"address",    ADDRESS   },
    {"article",    ARTICLE   },
    {"aside",      ASIDE     },
    {"audio",      AUDIO     },
    {"b",          B         },
    {"bdi",        BDI       },
    {"bdo",        BDO       },
    {"blockquote", BLOCKQUOTE},
    {"body",       BODY      },
    {"button",     BUTTON    },
    {"canvas",     CANVAS    },
    {"caption",    CAPTION   },
    {"cite",       CITE      },
    {"code",       CODE      },
    {"colgroup",   COLGROUP  },
    {"data",       DATA      },
    {"datalist",   DATALIST  },
    {"dd",         DD        },
    {"del",        DEL       },
    {"details",    DETAILS   },
    {"dfn",        DFN       },
    {"dialog",     DIALOG    },
    {"div",        DIV       },
    {"dl",         DL        },
    {"dt",         DT        },
    {"em",         EM        },
    {"fieldset",   FIELDSET  },
    {"figcaption", FIGCAPTION},
    {"figure",     FIGURE    },
    {"footer",     FOOTER    },
    {"form",       FORM      },
    {"h1",         H1        },
    {"h2",         H2        },
    {"h3",         H3        },
    {"h4",         H4        },
    {"h5",         H5        },
    {"h6",         H6        },
    {"head",       HEAD      },
    {"header",     HEADER    },
    {"hgroup",     HGROUP    },
    {"html",       HTML      },
    {"i",          I         },
    {"iframe",     IFRAME    },
    {"ins",        INS       },
    {"kbd",        KBD       },
    {"label",      LABEL     },
    {"legend",     LEGEND    },
    {"li",         LI        },
    {"main",       MAIN      },
    {"map",        MAP       },
    {"mark",       MARK      },
    {"math",       MATH      },
    {"menu",       MENU      },
    {"meter",      METER     },
    {"nav",        NAV       },
    {"noscript",   NOSCRIPT  },
    {"object",     OBJECT    },
    {"ol",         OL        },
    {"optgroup",   OPTGROUP  },
    {"option",     OPTION    },
    {"output",     OUTPUT    },
    {"p",          P         },
    {"picture",    PICTURE   },
    {"pre",        PRE       },
    {"progress",   PROGRESS  },
    {"q",          Q         },
    {"rb",         RB        },
    {"rp",         RP        },
    {"rt",         RT        },
    {"rtc",        RTC       },
    {"ruby",       RUBY      },
    {"s",          S         },
    {"samp",       SAMP      },
    {"script",     SCRIPT    },
    {"section",    SECTION   },
    {"select",     SELECT    },
    {"slot",       SLOT      },
    {"small",      SMALL     },
    {"span",       SPAN      },
    {"strong",     STRONG    },
    {"style",      STYLE     },
    {"sub",        SUB       },
    {"summary",    SUMMARY   },
    {"sup",        SUP       },
    {"svg",        SVG       },
    {"table",      TABLE     },
    {"tbody",      TBODY     },
    {"td",         TD        },
    {"template",   TEMPLATE  },
    {"textarea",   TEXTAREA  },
    {"tfoot",      TFOOT     },
    {"th",         TH        },
    {"thead",      THEAD     },
    {"time",       TIME      },
    {"title",      TITLE     },
    {"tr",         TR        },
    {"u",          U         },
    {"ul",         UL        },
    {"var",        VAR       },
    {"video",      VIDEO     },
 // INTERPOLATION is deliberately excluded from this list.
};

static const TagType TAG_TYPES_NOT_ALLOWED_IN_PARAGRAPHS[] = {
    ADDRESS,  ARTICLE,    ASIDE,  BLOCKQUOTE, DETAILS, DIV, DL,
    FIELDSET, FIGCAPTION, FIGURE, FOOTER,     FORM,    H1,  H2,
    H3,       H4,         H5,     H6,         HEADER,  HR,  MAIN,
    NAV,      OL,         P,      PRE,        SECTION,
};

static TagType get_tag_from_string(const char *tag_name) {
    for (int i = 0; i < sizeof(TAG_TYPES_BY_TAG_NAME) / sizeof(TagMap); i++) {
        if (strcmp(TAG_TYPES_BY_TAG_NAME[i].tag_name, tag_name) == 0) {
            return TAG_TYPES_BY_TAG_NAME[i].tag_value;
        }
    }
    return CUSTOM;
}

static inline Tag new_tag() {
    Tag tag;
    tag.type = END_;
    tag.custom_tag_name.data = NULL;
    tag.custom_tag_name.len = 0;
    tag.custom_tag_name.cap = 0;
    return tag;
}

static Tag make_tag(TagType type, const char *name) {
    Tag tag = new_tag();
    tag.type = type;
    if (type == CUSTOM) {
        size_t len = strlen(name);
        tag.custom_tag_name.data = (char *)calloc(1, sizeof(char) * (len + 1));
        tag.custom_tag_name.len = len;
        strncpy(tag.custom_tag_name.data, name, tag.custom_tag_name.len);
    }
    return tag;
}

static inline void tag_free(Tag *tag) {
    if (tag->type == CUSTOM) {
        free(tag->custom_tag_name.data);
    }
    tag->custom_tag_name.data = NULL;
}

static inline bool is_void(const Tag *tag) {
    return tag->type < END_OF_VOID_TAGS;
}

static inline Tag for_name(const char *name) {
    return make_tag(get_tag_from_string(name), name);
}

static inline bool tagcmp(const Tag *tag1, const Tag *tag2) {
    return tag1->type == tag2->type &&
           (tag1->type == CUSTOM ? strcmp(tag1->custom_tag_name.data,
                                          tag2->custom_tag_name.data) == 0
                                 : true);
}

static bool can_contain(Tag *self, const Tag *other) {
    TagType child = other->type;

    if (child == INTERPOLATION) {
        // can be contained anywhere
        return true;
    }

    switch (self->type) {
        case LI:
            return child != LI;

        case DT:
        case DD:
            return child != DT && child != DD;

        case P:
            for (int i = 0; i < sizeof(TAG_TYPES_NOT_ALLOWED_IN_PARAGRAPHS) /
                                    sizeof(TagType);
                 i++) {
                if (child == TAG_TYPES_NOT_ALLOWED_IN_PARAGRAPHS[i]) {
                    return false;
                }
            }
            return true;

        case COLGROUP:
            return child == COL;

        case RB:
        case RT:
        case RP:
            return child != RB && child != RT && child != RP;

        case OPTGROUP:
            return child != OPTGROUP;

        case TR:
            return child != TR;

        case TD:
        case TH:
            return child != TD && child != TH && child != TR;

        default:
            return true;
    }
}
