// This file is generated by tools/gen_operators.pl. CHANGES WILL BE OVERWRITTEN
/*  Copyright (C) 2013-2014  Povilas Kanapickas <povilas@radix.lt>

    Distributed under the Boost Software License, Version 1.0.
        (See accompanying file LICENSE_1_0.txt or copy at
            http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef LIBSIMDPP_SIMDPP_CORE_I_MUL_OPERATOR_H
#define LIBSIMDPP_SIMDPP_CORE_I_MUL_OPERATOR_H

#ifndef LIBSIMDPP_SIMD_H
    #error "This file must be included through simd.h"
#endif

#include <simdpp/types.h>
#include <simdpp/detail/expr/i_mul.h>
#include <simdpp/core/detail/get_expr_uint.h>
#include <simdpp/core/detail/scalar_arg_impl.h>
#include <simdpp/core/detail/get_expr_uint.h>

namespace simdpp {
namespace SIMDPP_ARCH_NAMESPACE {

// no 8 bit multiplications in SSE
/** Multiplies 16-bit values and returns the lower part of the multiplication

    @code
    r0 = low(a0 * b0)
    ...
    rN = low(aN * bN)
    @endcode

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, ALTIVEC, 2}
*/
template<unsigned N, class V1, class V2> SIMDPP_INL
typename detail::get_expr_uint<expr_mul_lo, V1, V2>::type
        operator*(const any_int16<N,V1>& a,
               const any_int16<N,V2>& b)
{
    expr_mul_lo<V1, V2> ret = { a.wrapped(), b.wrapped() };
    return ret;
}

SIMDPP_SCALAR_ARG_IMPL_INT_UNSIGNED(operator*, expr_mul_lo, any_int16, int16)

/** Multiplies 32-bit values and returns the lower half of the result.

    @code
    r0 = low(a0 * b0)
    ...
    rN = low(aN * bN)
    @endcode

    @par 128-bit version:
    @icost{SSE2-SSSE3, 6}
    @icost{ALTIVEC, 8}

    @par 256-bit version:
    @icost{SSE2-SSSE3, 12}
    @icost{SSE4.1, AVX, NEON, 2}
    @icost{ALTIVEC, 16}
*/
template<unsigned N, class V1, class V2> SIMDPP_INL
typename detail::get_expr_uint<expr_mul_lo, V1, V2>::type
        operator*(const any_int32<N,V1>& a,
               const any_int32<N,V2>& b)
{
    expr_mul_lo<V1, V2> ret = { a.wrapped(), b.wrapped() };
    return ret;
}

SIMDPP_SCALAR_ARG_IMPL_INT_UNSIGNED(operator*, expr_mul_lo, any_int32, int32)


} // namespace SIMDPP_ARCH_NAMESPACE
} // namespace simdpp

#endif

