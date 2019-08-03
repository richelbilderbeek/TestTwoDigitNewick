#pragma GCC diagnostic push

#include "qttesttwodigitnewickmenudialog.h"

#include <cassert>

#include "testtwodigitnewickmenudialog.h"
#include "qtaboutdialog.h"
#include "qttesttwodigitnewickmaindialog.h"
#include "ui_qttesttwodigitnewickmenudialog.h"
#pragma GCC diagnostic pop

ribi::QtTestTwoDigitNewickMenuDialog::QtTestTwoDigitNewickMenuDialog(QWidget *parent) :
  QtHideAndShowDialog(parent),
  ui(new Ui::QtTestTwoDigitNewickMenuDialog)
{
  ui->setupUi(this);
}

ribi::QtTestTwoDigitNewickMenuDialog::~QtTestTwoDigitNewickMenuDialog() noexcept
{
  delete ui;
}

void ribi::QtTestTwoDigitNewickMenuDialog::on_button_start_clicked()
{
  QtTestTwoDigitNewickMainDialog d;
  this->ShowChild(&d);
}

void ribi::QtTestTwoDigitNewickMenuDialog::on_button_about_clicked()
{
  QtAboutDialog d(TestTwoDigitNewickMenuDialog().GetAbout());
  this->ShowChild(&d);
}

void ribi::QtTestTwoDigitNewickMenuDialog::on_button_quit_clicked()
{
  this->close();
}
