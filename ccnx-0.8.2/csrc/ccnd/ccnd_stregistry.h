/* generated code, do not edit */
#include "ccnd_strategy.h"

/* prototypes */
void ccnd_default_strategy_impl(struct ccnd_handle *h,
      struct strategy_instance *instance,
      struct ccn_strategy *s,
      enum ccn_strategy_op op,
      unsigned faceid);
void ccnd_null_strategy_impl(struct ccnd_handle *h,
      struct strategy_instance *instance,
      struct ccn_strategy *s,
      enum ccn_strategy_op op,
      unsigned faceid);
void ccnd_trace_strategy_impl(struct ccnd_handle *h,
      struct strategy_instance *instance,
      struct ccn_strategy *s,
      enum ccn_strategy_op op,
      unsigned faceid);
void ccnd_parallel_strategy_impl(struct ccnd_handle *h,
      struct strategy_instance *instance,
      struct ccn_strategy *s,
      enum ccn_strategy_op op,
      unsigned faceid);
void ccnd_loadsharing_strategy_impl(struct ccnd_handle *h,
      struct strategy_instance *instance,
      struct ccn_strategy *s,
      enum ccn_strategy_op op,
      unsigned faceid);
void ccnd_faceattr_strategy_impl(struct ccnd_handle *h,
      struct strategy_instance *instance,
      struct ccn_strategy *s,
      enum ccn_strategy_op op,
      unsigned faceid);

#ifdef DEFINE_STRATEGY_CLASSES
/* strategy class table */
const struct strategy_class ccnd_strategy_classes[] = {
    {"default", &ccnd_default_strategy_impl},
    {"null", &ccnd_null_strategy_impl},
    {"trace", &ccnd_trace_strategy_impl},
    {"parallel", &ccnd_parallel_strategy_impl},
    {"loadsharing", &ccnd_loadsharing_strategy_impl},
    {"faceattr", &ccnd_faceattr_strategy_impl},
    {"", 0},	/* provide space for a few dynamic slots */
    {"", 0},
    {"", 0},
    {"", 0},
    {"", 0},
    {"", 0}};
#endif

/* end */
