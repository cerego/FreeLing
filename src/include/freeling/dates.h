//////////////////////////////////////////////////////////////////
//
//    FreeLing - Open Source Language Analyzers
//
//    Copyright (C) 2004   TALP Research Center
//                         Universitat Politecnica de Catalunya
//
//    This library is free software; you can redistribute it and/or
//    modify it under the terms of the GNU General Public
//    License as published by the Free Software Foundation; either
//    version 2.1 of the License, or (at your option) any later version.
//
//    This library is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//    General Public License for more details.
//
//    You should have received a copy of the GNU General Public
//    License along with this library; if not, write to the Free Software
//    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
//
//    contact: Lluis Padro (padro@lsi.upc.es)
//             TALP Research Center
//             despatx C6.212 - Campus Nord UPC
//             08034 Barcelona.  SPAIN
//
////////////////////////////////////////////////////////////////

#ifndef _DATES
#define _DATES

#include "fries/language.h"
#include "freeling/dates_modules.h"

///////////////////////////////////////////////////////////////
///
///  The class dates provides a wrapper to transparently
///  create and access a dates_module, a temporal expression
///  recognizer for the appropriate language.
///          
////////////////////////////////////////////////////////////////
             
class dates {
             
   private:  
      /// remember which module is doing the real work.
      dates_module * who;
             
   public:   
      /// Constructor
      dates(const std::string &); 
      /// Destructor
      ~dates(); 

      /// Detect date/time expressions in sentence using default options
      void annotate(sentence &);

};  
             
#endif

