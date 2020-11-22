/*  main.cpp    Creed Jones     Virginia Tech       August 22, 2020
 *  This is the main app for the HW1 distribution display project
 *  created by the project wizard
 *  Qt creator, using UI form design
 *
*/

#include "distribution.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Distribution w;
    w.show();
    return a.exec();
}
