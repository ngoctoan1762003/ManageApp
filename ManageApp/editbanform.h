#ifndef EDITBANFORM_H
#define EDITBANFORM_H

#include <QDialog>

namespace Ui {
class EditBanForm;
}

class EditBanForm : public QDialog
{
    Q_OBJECT

public:
    explicit EditBanForm(QWidget *parent = nullptr);
    ~EditBanForm();

private:
    Ui::EditBanForm *ui;
};

#endif // EDITBANFORM_H
