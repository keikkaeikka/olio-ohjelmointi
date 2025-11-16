#include "car.h"
#include<iostream>
using namespace std;

Car::Car() {}

void Car::printData()
{
    cout<< "Brand:" << brand << endl;
    cout<< "model:" << model << endl;
    cout<< "model year:" << yearModel << endl;
}

Car::Car(string b, string m, int y)
{
    brand = b;
    model = m;
    yearModel = y;
}
