#ifndef QTTESTTWODIGITNEWICKDIALOG_H
#define QTTESTTWODIGITNEWICKDIALOG_H



#include "qthideandshowdialog.h"


namespace Ui {
  class QtTestTwoDigitNewickMainDialog;
}

namespace ribi {

class QtTestTwoDigitNewickMainDialog : public QtHideAndShowDialog
{
  Q_OBJECT

public:
  explicit QtTestTwoDigitNewickMainDialog(QWidget *parent = 0);
  QtTestTwoDigitNewickMainDialog(const QtTestTwoDigitNewickMainDialog&) = delete;
  QtTestTwoDigitNewickMainDialog& operator=(const QtTestTwoDigitNewickMainDialog&) = delete;
  ~QtTestTwoDigitNewickMainDialog() noexcept;

protected:


private:
  Ui::QtTestTwoDigitNewickMainDialog *ui;

private slots:
  void OnAnyChange();
  void OnAboutClick();
};

} //~namespace ribi

#endif // QTTESTTWODIGITNEWICKDIALOG_H
