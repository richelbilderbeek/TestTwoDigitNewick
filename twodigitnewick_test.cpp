//---------------------------------------------------------------------------
/*
TestTwoDigitNewick, tool to test the two-digit-Newick architecture
Copyright (C) 2010-2015 Richel Bilderbeek

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.If not, see <http://www.gnu.org/licenses/>.
*/
//---------------------------------------------------------------------------
//From http://www.richelbilderbeek.nl/ToolTestTwoDigitNewick.htm
//---------------------------------------------------------------------------
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#include "twodigitnewick.h"

#include <iostream>
#include <boost/test/unit_test.hpp>
#include <boost/numeric/conversion/cast.hpp>

#include "binarynewickvector.h"
#include "newick.h"
#include "twodigitnewickindexer.h"

using namespace ribi;

BOOST_AUTO_TEST_CASE(ribi_TwoDigitNewick_all)
{
  ribi::TwoDigitNewick::SetTheta(10.0);
  const std::vector<std::string> v = Newick().CreateValidNewicks();
  for(const std::string& s: v)
  {
    if ( Newick().CalcComplexity(Newick().StringToNewick(s))
      >  BigInteger(1000000) )
    {
      continue;
    }
    if (Newick().IsBinaryNewick(Newick().StringToNewick(s)))
    {
      BinaryNewickVector n(s);
      TwoDigitNewickIndexer(n,10.0);
    }
  }
}




