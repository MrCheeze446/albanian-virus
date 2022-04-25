#include "fakebluescreen.h"
#include "ui_fakebluescreen.h"

fakeBlueScreen::fakeBlueScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fakeBlueScreen)
{
    ui->setupUi(this);
}

fakeBlueScreen::~fakeBlueScreen()
{
    delete ui;
}
