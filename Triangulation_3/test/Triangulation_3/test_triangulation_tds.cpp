// Copyright (c) 1998  INRIA Sophia-Antipolis (France).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org); you may redistribute it under
// the terms of the Q Public License version 1.0.
// See the file LICENSE.QPL distributed with CGAL.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL$
// $Id$
// 
//
// Author(s)     : Francois Rebufat

#include <CGAL/Triangulation_data_structure_3.h>

#include <CGAL/_test_cls_tds_3.h>

typedef CGAL::Triangulation_data_structure_3<>               Tds;

// Explicit instantiation :
template class CGAL::Triangulation_data_structure_3<>;

int main()
{
  _test_cls_tds_3(Tds());
  return 0;
}
