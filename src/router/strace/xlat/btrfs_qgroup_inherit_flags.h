/* Generated by ./xlat/gen.sh from ./xlat/btrfs_qgroup_inherit_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat btrfs_qgroup_inherit_flags[];

# else

static const struct xlat_data btrfs_qgroup_inherit_flags_xdata[] = {
#if defined(BTRFS_QGROUP_INHERIT_SET_LIMITS) || (defined(HAVE_DECL_BTRFS_QGROUP_INHERIT_SET_LIMITS) && HAVE_DECL_BTRFS_QGROUP_INHERIT_SET_LIMITS)
  XLAT_TYPE(uint64_t, BTRFS_QGROUP_INHERIT_SET_LIMITS),
#endif
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat btrfs_qgroup_inherit_flags[1] = { {
 .data = btrfs_qgroup_inherit_flags_xdata,
 .size = ARRAY_SIZE(btrfs_qgroup_inherit_flags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
