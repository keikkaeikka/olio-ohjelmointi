#ifndef CAR_H
#define CAR_H
#include<iostream>
using namespace std;

class Car
{
public:
    Car();
    void printData();
    Car(string brand,string model,int yearModel);
private:
    string brand;
    string model;
    int yearModel;
};

#endif // CAR_H
