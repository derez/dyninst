
#ifndef DYN_DETAIL_BOOST_MPL_AUX_CONFIG_ETI_HPP_INCLUDED
#define DYN_DETAIL_BOOST_MPL_AUX_CONFIG_ETI_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2001-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Id: eti.hpp 49267 2008-10-11 06:19:02Z agurtovoy $
// $Date: 2008-10-11 02:19:02 -0400 (Sat, 11 Oct 2008) $
// $Revision: 49267 $

#include <dyn_detail/boost/mpl/aux_/config/msvc.hpp>
#include <dyn_detail/boost/mpl/aux_/config/workaround.hpp>

// flags for MSVC 6.5's so-called "early template instantiation bug"
#if    !defined(DYN_DETAIL_BOOST_MPL_CFG_MSVC_60_ETI_BUG) \
    && !defined(DYN_DETAIL_BOOST_MPL_PREPROCESSING_MODE) \
    && DYN_DETAIL_BOOST_WORKAROUND(DYN_DETAIL_BOOST_MSVC, < 1300)

#   define DYN_DETAIL_BOOST_MPL_CFG_MSVC_60_ETI_BUG

#endif

#if    !defined(DYN_DETAIL_BOOST_MPL_CFG_MSVC_70_ETI_BUG) \
    && !defined(DYN_DETAIL_BOOST_MPL_PREPROCESSING_MODE) \
    && DYN_DETAIL_BOOST_WORKAROUND(DYN_DETAIL_BOOST_MSVC, == 1300)

#   define DYN_DETAIL_BOOST_MPL_CFG_MSVC_70_ETI_BUG

#endif

#if    !defined(DYN_DETAIL_BOOST_MPL_CFG_MSVC_ETI_BUG) \
    && !defined(DYN_DETAIL_BOOST_MPL_PREPROCESSING_MODE) \
    && ( defined(DYN_DETAIL_BOOST_MPL_CFG_MSVC_60_ETI_BUG) \
        || defined(DYN_DETAIL_BOOST_MPL_CFG_MSVC_70_ETI_BUG) \
        )

#   define DYN_DETAIL_BOOST_MPL_CFG_MSVC_ETI_BUG

#endif

#endif // DYN_DETAIL_BOOST_MPL_AUX_CONFIG_ETI_HPP_INCLUDED
