#ifndef FAKEBLUESCREEN_H
#define FAKEBLUESCREEN_H

#include <QDialog>

namespace Ui {
class fakeBlueScreen;
}

class fakeBlueScreen : public QDialog
{
    Q_OBJECT

public:
    explicit fakeBlueScreen(QWidget *parent = nullptr);
    ~fakeBlueScreen();

private:
    Ui::fakeBlueScreen *ui;
};

#endif // FAKEBLUESCREEN_H
