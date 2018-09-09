#include <iomanip>
#include <iostream>

#include "newick.h"
#include "twodigitnewick.h"

int main(int argc, char* argv[])
{
  if (argc != 3)
  {
    std::cout
      << "Incorrect number of arguments:\n"
      << '\n'
      << "No arguments: start GUI version:\n"
      << "  " << argv[0] << '\n'
      << "Two arguments: start command-line version:\n"
      << "  - newick\n"
      << "  - theta\n"
      << "  \'" << argv[0] << " (2,(2,2)) " << (5.0 / 2.0) << "\'\n";
    return 1;
  }
  const std::string newick = argv[1];
  if (!ribi::newick::IsNewick(newick))
  {
    std::cout
      << "Invalid Newick format. Use for example:\n"
      << "  \'" << argv[0] << " (2,(2,2)) " << (5.0 / 2.0) << "\'\n";
    return 1;
  }
  try
  {
    boost::lexical_cast<double>(argv[2]);
  }
  catch (boost::bad_lexical_cast&)
  {
    std::cout
      << "Invalid theta format. Use for example:\n"
      << "  \'" << argv[0] << " (2,(2,2)) " << (5.0 / 2.0) << "\'\n";
    return 1;

  }
  const double theta = boost::lexical_cast<double>(argv[2]);
  const double p{
    ribi::CalculateProbabilityTwoDigitNewick(newick,theta)
  };
  std::cout << std::setprecision(99) << p << '\n';
}
