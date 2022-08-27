#ifndef SERVER_SETTINGS_HPP
#define SERVER_SETTINGS_HPP
#include <QWidget>
#include <QDialog>
#include <QString>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QLayout>
#include <QMessageBox>
#include <QtNetwork/QTcpServer>
#include <QMainWindow>


class Server_Settings : public QDialog {
    Q_OBJECT

public:
    Server_Settings(QWidget *parent=nullptr);
    ~Server_Settings();
    QPushButton *accept;
    QLineEdit *ip;
    QLineEdit *port;
private:
    QLabel *ip_label;
    QLabel *port_label;

};

#endif // SERVER_SETTINGS_HPP
