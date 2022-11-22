#ifndef ADDBANFORM_H
#define ADDBANFORM_H

#include <QDialog>

namespace Ui {
class AddBanForm;
}

class AddBanForm : public QDialog
{
    Q_OBJECT

public:
    explicit AddBanForm(QWidget *parent = nullptr);
    ~AddBanForm();

signals:
    void AddBan(QString);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::AddBanForm *ui;
};

#endif // ADDBANFORM_H
