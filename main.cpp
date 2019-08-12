#include "tripplanner.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    TripPlanner tripPlanner;
    tripPlanner.show();

    return app.exec();
}
