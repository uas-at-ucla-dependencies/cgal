// Copyright (c) 1997-2003  Utrecht University (The Netherlands),
// ETH Zurich (Switzerland), Freie Universitaet Berlin (Germany),
// INRIA Sophia-Antipolis (France), Martin-Luther-University Halle-Wittenberg
// (Germany), Max-Planck-Institute Saarbrucken (Germany), RISC Linz (Austria),
// and Tel-Aviv University (Israel).  All rights reserved.
//
// This file is part of CGAL (www.cgal.org); you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation; version 2.1 of the License.
// See the file LICENSE.LGPL distributed with CGAL.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $Source$
// $Revision$ $Date$
// $Name$
//
// Author(s)     : Sylvain Pion

// This file is automatically generated by
// scripts/filtered_predicates_generator.pl

#ifndef CGAL_ARITHMETIC_FILTER_REGULAR_TRIANGULATION_FTC3_H
#define CGAL_ARITHMETIC_FILTER_REGULAR_TRIANGULATION_FTC3_H

#include <CGAL/Profile_counter.h>

CGAL_BEGIN_NAMESPACE
template <class ET> class Lazy_exact_nt;
CGAL_END_NAMESPACE

CGAL_BEGIN_NAMESPACE

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class CGAL_IA_CT, class CGAL_IA_ET, bool CGAL_IA_PROTECTED,
           class CGAL_IA_CACHE >
#else
static
#endif
/*  */
Oriented_side
power_testC3(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &px,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &py,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &pz,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &pwt,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &qx,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &qy,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &qz,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &qwt,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &rx,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &ry,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &rz,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &rwt,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &sx,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &sy,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &sz,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &swt,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &tx,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &ty,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &tz,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &twt)
{
  try
  {
    CGAL_PROFILER("IA power_testC3 calls");
    Protect_FPU_rounding<CGAL_IA_PROTECTED> Protection;
    return power_testC3(
		px.interval(),
		py.interval(),
		pz.interval(),
		pwt.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval(),
		qwt.interval(),
		rx.interval(),
		ry.interval(),
		rz.interval(),
		rwt.interval(),
		sx.interval(),
		sy.interval(),
		sz.interval(),
		swt.interval(),
		tx.interval(),
		ty.interval(),
		tz.interval(),
		twt.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    CGAL_PROFILER("IA power_testC3 failures");
    Protect_FPU_rounding<!CGAL_IA_PROTECTED> Protection(CGAL_FE_TONEAREST);
    return power_testC3(
		px.exact(),
		py.exact(),
		pz.exact(),
		pwt.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact(),
		qwt.exact(),
		rx.exact(),
		ry.exact(),
		rz.exact(),
		rwt.exact(),
		sx.exact(),
		sy.exact(),
		sz.exact(),
		swt.exact(),
		tx.exact(),
		ty.exact(),
		tz.exact(),
		twt.exact());
  }
}

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class ET >
/*  */
Oriented_side
power_testC3(
    const Lazy_exact_nt<ET> &px,
    const Lazy_exact_nt<ET> &py,
    const Lazy_exact_nt<ET> &pz,
    const Lazy_exact_nt<ET> &pwt,
    const Lazy_exact_nt<ET> &qx,
    const Lazy_exact_nt<ET> &qy,
    const Lazy_exact_nt<ET> &qz,
    const Lazy_exact_nt<ET> &qwt,
    const Lazy_exact_nt<ET> &rx,
    const Lazy_exact_nt<ET> &ry,
    const Lazy_exact_nt<ET> &rz,
    const Lazy_exact_nt<ET> &rwt,
    const Lazy_exact_nt<ET> &sx,
    const Lazy_exact_nt<ET> &sy,
    const Lazy_exact_nt<ET> &sz,
    const Lazy_exact_nt<ET> &swt,
    const Lazy_exact_nt<ET> &tx,
    const Lazy_exact_nt<ET> &ty,
    const Lazy_exact_nt<ET> &tz,
    const Lazy_exact_nt<ET> &twt)
{
  try
  {
    CGAL_PROFILER("Lazy IA power_testC3 calls");
    Protect_FPU_rounding<true> Protection;
    return power_testC3(
		px.interval(),
		py.interval(),
		pz.interval(),
		pwt.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval(),
		qwt.interval(),
		rx.interval(),
		ry.interval(),
		rz.interval(),
		rwt.interval(),
		sx.interval(),
		sy.interval(),
		sz.interval(),
		swt.interval(),
		tx.interval(),
		ty.interval(),
		tz.interval(),
		twt.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    CGAL_PROFILER("Lazy IA power_testC3 failures");
    Protect_FPU_rounding<false> Protection(CGAL_FE_TONEAREST);
    return power_testC3(
		px.exact(),
		py.exact(),
		pz.exact(),
		pwt.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact(),
		qwt.exact(),
		rx.exact(),
		ry.exact(),
		rz.exact(),
		rwt.exact(),
		sx.exact(),
		sy.exact(),
		sz.exact(),
		swt.exact(),
		tx.exact(),
		ty.exact(),
		tz.exact(),
		twt.exact());
  }
}
#endif

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class CGAL_IA_CT, class CGAL_IA_ET, bool CGAL_IA_PROTECTED,
           class CGAL_IA_CACHE >
#else
static
#endif
/*  */
Oriented_side
power_testC3(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &px,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &py,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &pz,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &pwt,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &qx,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &qy,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &qz,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &qwt,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &rx,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &ry,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &rz,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &rwt,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &tx,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &ty,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &tz,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &twt)
{
  try
  {
    CGAL_PROFILER("IA power_testC3 calls");
    Protect_FPU_rounding<CGAL_IA_PROTECTED> Protection;
    return power_testC3(
		px.interval(),
		py.interval(),
		pz.interval(),
		pwt.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval(),
		qwt.interval(),
		rx.interval(),
		ry.interval(),
		rz.interval(),
		rwt.interval(),
		tx.interval(),
		ty.interval(),
		tz.interval(),
		twt.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    CGAL_PROFILER("IA power_testC3 failures");
    Protect_FPU_rounding<!CGAL_IA_PROTECTED> Protection(CGAL_FE_TONEAREST);
    return power_testC3(
		px.exact(),
		py.exact(),
		pz.exact(),
		pwt.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact(),
		qwt.exact(),
		rx.exact(),
		ry.exact(),
		rz.exact(),
		rwt.exact(),
		tx.exact(),
		ty.exact(),
		tz.exact(),
		twt.exact());
  }
}

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class ET >
/*  */
Oriented_side
power_testC3(
    const Lazy_exact_nt<ET> &px,
    const Lazy_exact_nt<ET> &py,
    const Lazy_exact_nt<ET> &pz,
    const Lazy_exact_nt<ET> &pwt,
    const Lazy_exact_nt<ET> &qx,
    const Lazy_exact_nt<ET> &qy,
    const Lazy_exact_nt<ET> &qz,
    const Lazy_exact_nt<ET> &qwt,
    const Lazy_exact_nt<ET> &rx,
    const Lazy_exact_nt<ET> &ry,
    const Lazy_exact_nt<ET> &rz,
    const Lazy_exact_nt<ET> &rwt,
    const Lazy_exact_nt<ET> &tx,
    const Lazy_exact_nt<ET> &ty,
    const Lazy_exact_nt<ET> &tz,
    const Lazy_exact_nt<ET> &twt)
{
  try
  {
    CGAL_PROFILER("Lazy IA power_testC3 calls");
    Protect_FPU_rounding<true> Protection;
    return power_testC3(
		px.interval(),
		py.interval(),
		pz.interval(),
		pwt.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval(),
		qwt.interval(),
		rx.interval(),
		ry.interval(),
		rz.interval(),
		rwt.interval(),
		tx.interval(),
		ty.interval(),
		tz.interval(),
		twt.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    CGAL_PROFILER("Lazy IA power_testC3 failures");
    Protect_FPU_rounding<false> Protection(CGAL_FE_TONEAREST);
    return power_testC3(
		px.exact(),
		py.exact(),
		pz.exact(),
		pwt.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact(),
		qwt.exact(),
		rx.exact(),
		ry.exact(),
		rz.exact(),
		rwt.exact(),
		tx.exact(),
		ty.exact(),
		tz.exact(),
		twt.exact());
  }
}
#endif

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class CGAL_IA_CT, class CGAL_IA_ET, bool CGAL_IA_PROTECTED,
           class CGAL_IA_CACHE >
#else
static
#endif
/*  */
Oriented_side
power_testC3(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &px,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &py,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &pz,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &pwt,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &qx,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &qy,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &qz,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &qwt,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &tx,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &ty,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &tz,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &twt)
{
  try
  {
    CGAL_PROFILER("IA power_testC3 calls");
    Protect_FPU_rounding<CGAL_IA_PROTECTED> Protection;
    return power_testC3(
		px.interval(),
		py.interval(),
		pz.interval(),
		pwt.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval(),
		qwt.interval(),
		tx.interval(),
		ty.interval(),
		tz.interval(),
		twt.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    CGAL_PROFILER("IA power_testC3 failures");
    Protect_FPU_rounding<!CGAL_IA_PROTECTED> Protection(CGAL_FE_TONEAREST);
    return power_testC3(
		px.exact(),
		py.exact(),
		pz.exact(),
		pwt.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact(),
		qwt.exact(),
		tx.exact(),
		ty.exact(),
		tz.exact(),
		twt.exact());
  }
}

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class ET >
/*  */
Oriented_side
power_testC3(
    const Lazy_exact_nt<ET> &px,
    const Lazy_exact_nt<ET> &py,
    const Lazy_exact_nt<ET> &pz,
    const Lazy_exact_nt<ET> &pwt,
    const Lazy_exact_nt<ET> &qx,
    const Lazy_exact_nt<ET> &qy,
    const Lazy_exact_nt<ET> &qz,
    const Lazy_exact_nt<ET> &qwt,
    const Lazy_exact_nt<ET> &tx,
    const Lazy_exact_nt<ET> &ty,
    const Lazy_exact_nt<ET> &tz,
    const Lazy_exact_nt<ET> &twt)
{
  try
  {
    CGAL_PROFILER("Lazy IA power_testC3 calls");
    Protect_FPU_rounding<true> Protection;
    return power_testC3(
		px.interval(),
		py.interval(),
		pz.interval(),
		pwt.interval(),
		qx.interval(),
		qy.interval(),
		qz.interval(),
		qwt.interval(),
		tx.interval(),
		ty.interval(),
		tz.interval(),
		twt.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    CGAL_PROFILER("Lazy IA power_testC3 failures");
    Protect_FPU_rounding<false> Protection(CGAL_FE_TONEAREST);
    return power_testC3(
		px.exact(),
		py.exact(),
		pz.exact(),
		pwt.exact(),
		qx.exact(),
		qy.exact(),
		qz.exact(),
		qwt.exact(),
		tx.exact(),
		ty.exact(),
		tz.exact(),
		twt.exact());
  }
}
#endif

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class CGAL_IA_CT, class CGAL_IA_ET, bool CGAL_IA_PROTECTED,
           class CGAL_IA_CACHE >
#else
static
#endif
/*  */
Oriented_side
power_testC3(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &pwt,
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, Dynamic, CGAL_IA_PROTECTED, CGAL_IA_CACHE> &qwt)
{
  try
  {
    CGAL_PROFILER("IA power_testC3 calls");
    Protect_FPU_rounding<CGAL_IA_PROTECTED> Protection;
    return power_testC3(
		pwt.interval(),
		qwt.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    CGAL_PROFILER("IA power_testC3 failures");
    Protect_FPU_rounding<!CGAL_IA_PROTECTED> Protection(CGAL_FE_TONEAREST);
    return power_testC3(
		pwt.exact(),
		qwt.exact());
  }
}

#ifndef CGAL_CFG_MATCHING_BUG_2
template < class ET >
/*  */
Oriented_side
power_testC3(
    const Lazy_exact_nt<ET> &pwt,
    const Lazy_exact_nt<ET> &qwt)
{
  try
  {
    CGAL_PROFILER("Lazy IA power_testC3 calls");
    Protect_FPU_rounding<true> Protection;
    return power_testC3(
		pwt.interval(),
		qwt.interval());
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    CGAL_PROFILER("Lazy IA power_testC3 failures");
    Protect_FPU_rounding<false> Protection(CGAL_FE_TONEAREST);
    return power_testC3(
		pwt.exact(),
		qwt.exact());
  }
}
#endif

CGAL_END_NAMESPACE

#endif // CGAL_ARITHMETIC_FILTER_REGULAR_TRIANGULATION_FTC3_H
