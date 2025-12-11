#include "myclass.h"
#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass obj;        // Luodaan MyClass-olio
    obj.raiseMySignal(); // Kutsutaan metodia, joka emittoi signaalin

    return a.exec();     // Qt event loop, jotta signaalit toimivat
}
