//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP___ALGORITHM_RANGES_PARTITION_POINT_H
#define _LIBCPP___ALGORITHM_RANGES_PARTITION_POINT_H

#include <__algorithm/make_projected.h>
#include <__algorithm/partition_point.h>
#include <__config>
#include <__functional/identity.h>
#include <__functional/invoke.h>
#include <__functional/ranges_operations.h>
#include <__iterator/concepts.h>
#include <__iterator/iterator_traits.h>
#include <__iterator/projected.h>
#include <__ranges/access.h>
#include <__ranges/concepts.h>
#include <__ranges/dangling.h>
#include <__utility/forward.h>
#include <__utility/move.h>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#  pragma GCC system_header
#endif

#if _LIBCPP_STD_VER > 17 && !defined(_LIBCPP_HAS_NO_INCOMPLETE_RANGES)

_LIBCPP_BEGIN_NAMESPACE_STD

namespace ranges {
namespace __partition_point {

struct __fn {

  template <forward_iterator _Iter, sentinel_for<_Iter> _Sent, class _Proj = identity,
            indirect_unary_predicate<projected<_Iter, _Proj>> _Pred>
  _LIBCPP_HIDE_FROM_ABI constexpr
  _Iter operator()(_Iter __first, _Sent __last, _Pred __pred, _Proj __proj = {}) const {
    // TODO: implement
    (void)__first; (void)__last; (void)__pred; (void)__proj;
    return {};
  }

  template <forward_range _Range, class _Proj = identity,
            indirect_unary_predicate<projected<iterator_t<_Range>, _Proj>> _Pred>
  _LIBCPP_HIDE_FROM_ABI constexpr
  borrowed_iterator_t<_Range> operator()(_Range&& __range, _Pred __pred, _Proj __proj = {}) const {
    // TODO: implement
    (void)__range; (void)__pred; (void)__proj;
    return {};
  }

};

} // namespace __partition_point

inline namespace __cpo {
  inline constexpr auto partition_point = __partition_point::__fn{};
} // namespace __cpo
} // namespace ranges

_LIBCPP_END_NAMESPACE_STD

#endif // _LIBCPP_STD_VER > 17 && !defined(_LIBCPP_HAS_NO_INCOMPLETE_RANGES)

#endif // _LIBCPP___ALGORITHM_RANGES_PARTITION_POINT_H