/* Generated by ./xlat/gen.sh from ./xlat/delete_module_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat delete_module_flags in mpers mode

# else

static const struct xlat_data delete_module_flags_xdata[] = {
#if defined(O_NONBLOCK) || (defined(HAVE_DECL_O_NONBLOCK) && HAVE_DECL_O_NONBLOCK)
  XLAT(O_NONBLOCK),
#endif
#if defined(O_TRUNC) || (defined(HAVE_DECL_O_TRUNC) && HAVE_DECL_O_TRUNC)
  XLAT(O_TRUNC),
#endif
};
static
const struct xlat delete_module_flags[1] = { {
 .data = delete_module_flags_xdata,
 .size = ARRAY_SIZE(delete_module_flags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
