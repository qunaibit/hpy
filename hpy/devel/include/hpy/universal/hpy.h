#ifndef HPY_UNIVERSAL_H
#define HPY_UNIVERSAL_H

#define HPyAPI_RUNTIME_FUNC(restype) _HPy_HIDDEN restype


typedef struct _HPyContext_s HPyContext;

/* compatibility CPython types */
#include "hpy/cpy_types.h"


// XXX: we need to decide whether these are part of the official API or not,
// and maybe introduce a better naming convetion. For now, they are needed for
// ujson
static inline HPy HPy_FromVoidP(void *p) { return (HPy){(HPy_ssize_t)p}; }
static inline void* HPy_AsVoidP(HPy h) { return (void*)h._i; }

// include runtime functions
#include "hpy/macros.h"

#include "hpy/hpyfunc.h"
#include "hpy/hpydef.h"
#include "hpy/hpytype.h"
#include "hpy/hpymodule.h"

#include "hpy/runtime/argparse.h"
#include "hpy/runtime/helpers.h"

#include "autogen_ctx.h"
#include "autogen_trampolines.h"

/* manual trampolines */

static inline HPy _HPy_New(HPyContext *ctx, HPy h_type, void **data) {
    /* Performance hack: the autogenerated version of this trampoline would
       simply forward data to ctx_New.

       Suppose you call HPy_New this way:
           PointObject *point;
           HPy h = HPy_New(ctx, cls, &point);

       If you pass "data" to ctx->New, the C compiler must assume that anybody
       could write a different value at any time into this local variable
       because a pointer to it escaped. With this hack, it's no longer the
       case: what escaped is the address of data_result instead and that local
       variable disappears since this function is likely inlined.

       See https://github.com/pyhandle/hpy/pull/22#pullrequestreview-413365845
    */
    void *data_result;
    HPy h = ctx->ctx_New(ctx, h_type, &data_result);
    *data = data_result;
    return h;
}

static inline _HPy_NO_RETURN void
HPy_FatalError(HPyContext *ctx, const char *message) {
    ctx->ctx_FatalError(ctx, message);
    /* note: the following abort() is unreachable, but needed because the
       _HPy_NO_RETURN doesn't seem to be sufficient.  I think that what
       occurs is that this function is inlined, after which gcc forgets
       that it couldn't return.  Having abort() inlined fixes that. */
    abort();
}


#endif /* HPY_UNIVERSAL_H */
