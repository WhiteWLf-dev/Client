#include "Server_Settings.hpp"
#include <QHBoxLayout>

Server_Settings::Server_Settings(QWidget *parent) : QDialog(parent) {
    ip_label=new QLabel(tr("IP: "));
    port_label=new QLabel(tr("Port: "));
    ip=new QLineEdit();
    port=new QLineEdit();
    accept=new QPushButton(tr("&Accept"));

    setFocusProxy(ip);

    QGridLayout* grlayout=new QGridLayout(this);
    grlayout->addWidget(ip_label,0,0);
    grlayout->addWidget(port_label,3,0);
    grlayout->addWidget(ip,2,0);
    grlayout->addWidget(port,4,0);
    grlayout->addWidget(accept,5,0);

    setLayout(grlayout);

    setWindowTitle(tr("Server settings"));
    connect(accept, SIGNAL(clicked()), parent, SLOT(on_accept()));
}

Server_Settings::~Server_Settings()=default;



