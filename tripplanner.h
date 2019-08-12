#ifndef TRIPPLANNER_H
#define TRIPPLANNER_H

#include "ui_tripplanner.h"
#include <QDialog>
#include <QProgressBar>
#include <QTcpSocket>

namespace Ui {
class TripPlanner;
}

class TripPlanner : public QDialog, private Ui::TripPlanner
{
    Q_OBJECT

public:
    explicit TripPlanner(QWidget *parent = 0);
signals:

private slots:
    void connectToServer();
    void sendRequest();
    void updateTableWidget();
    void stopSearch();
    void connectionClosedByServer();
    void error();
private:
    void closeConnection();
    QTcpSocket tcpSocket;
    quint16 nextBlockSize;
};

#endif // TRIPPLANNER_H
