#ifndef QTTESTTWODIGITNEWICKMENUDIALOG_H
#define QTTESTTWODIGITNEWICKMENUDIALOG_H



#include "qthideandshowdialog.h"


namespace Ui {
  class QtTestTwoDigitNewickMenuDialog;
}

namespace ribi {

class QtTestTwoDigitNewickMenuDialog : public QtHideAndShowDialog
{
  Q_OBJECT //!OCLINT

public:
  explicit QtTestTwoDigitNewickMenuDialog(QWidget *parent = 0);
  QtTestTwoDigitNewickMenuDialog(const QtTestTwoDigitNewickMenuDialog&) = delete;
  QtTestTwoDigitNewickMenuDialog& operator=(const QtTestTwoDigitNewickMenuDialog&) = delete;
  ~QtTestTwoDigitNewickMenuDialog() noexcept;

private slots:
  void on_button_about_clicked();
  void on_button_quit_clicked();
  void on_button_start_clicked();

private:
  Ui::QtTestTwoDigitNewickMenuDialog *ui;
};

} //~namespace ribi

#endif // QTTESTTWODIGITNEWICKMENUDIALOG_H
