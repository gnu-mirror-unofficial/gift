/* -*- mode: c++ -*- 
*/
/* 

    GIFT, a flexible content based image retrieval system.
    Copyright (C) 1998, 1999, 2000, 2001, 2002, CUI University of Geneva

     Copyright (C) 2003, 2004 Bayreuth University
    Copyright (C) 2005,2006 Bamberg University
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/
// -*- mode: c++ -*-
#ifndef _CAFURL2FTS
#define _CAFURL2FTS
#include "libGIFTAcURL2FTS/include/uses-declarations.h"
#include "libMRML/include/CAccessorFactory.h"
/** 
 * A factory to make URL2FTS accessors
 *@author Wolfgang M?ller
 *
 */
class CAFURL2FTS:public CAccessorFactory{
 public:
  /** Constructs this, means, sets mName */
  CAFURL2FTS();
  /** makes an inverte file accessor */
  CAccessor* makeAccessor(const CXMLElement& inConfiguration)const;
};

#endif
