#ifndef RFIDFORM_H
#define RFIDFORM_H

#include <QWidget>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QMqttClient>
#include "main.h"
#include <QSqlTableModel>
namespace Ui {
class rfidForm;
}

class rfidForm : public QWidget
{
    Q_OBJECT

public:
    explicit rfidForm(QWidget *parent = nullptr);
    ~rfidForm();

private:
    Ui::rfidForm *ui;
    QSqlDatabase mydb_rfid;
    QMqttClient *m_client_rfid;
};

#endif // RFIDFORM_H
