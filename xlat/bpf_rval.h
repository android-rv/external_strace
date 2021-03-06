/* Generated by ./xlat/gen.sh from ./xlat/bpf_rval.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_K) || (defined(HAVE_DECL_BPF_K) && HAVE_DECL_BPF_K)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_K) == (0x00), "BPF_K != 0x00");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_K 0x00
#endif
#if defined(BPF_X) || (defined(HAVE_DECL_BPF_X) && HAVE_DECL_BPF_X)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_X) == (0x08), "BPF_X != 0x08");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_X 0x08
#endif
#if defined(BPF_A) || (defined(HAVE_DECL_BPF_A) && HAVE_DECL_BPF_A)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_A) == (0x10), "BPF_A != 0x10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_A 0x10
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bpf_rval in mpers mode

# else

static
const struct xlat bpf_rval[] = {
 XLAT(BPF_K),
 XLAT(BPF_X),
 XLAT(BPF_A),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
