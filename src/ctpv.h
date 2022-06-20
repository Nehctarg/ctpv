#ifndef CTPV_H
#define CTPV_H

#define ANY_TYPE "*"

struct CTPV {
    enum {
        MODE_PREVIEW = 0, /* default mode */
        MODE_SERVER,
        MODE_CLEAR,
        MODE_END,
        MODE_LIST,
        MODE_MIME,
    } mode;
    char *server_id_s;
    struct {
        int force_kitty;
    } opts;
};

extern struct CTPV ctpv;

extern const char any_type[];

#endif
