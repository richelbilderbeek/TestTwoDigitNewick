#ifndef TESTTWODIGITNEWICKMENUDIALOG_H
#define TESTTWODIGITNEWICKMENUDIALOG_H

#include "menudialog.h"

namespace ribi {

struct TestTwoDigitNewickMenuDialog final : public MenuDialog
{
  About GetAbout() const noexcept override;
  Help GetHelp() const noexcept override;
  std::string GetVersion() const noexcept override;
  std::vector<std::string> GetVersionHistory() const noexcept override;

  private:
  int ExecuteSpecific(const std::vector<std::string>& argv) noexcept override;
};

} //~namespace ribi

#endif // TESTTWODIGITNEWICKMENUDIALOG_H
