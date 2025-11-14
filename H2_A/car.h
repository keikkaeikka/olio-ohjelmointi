#ifndef CAR_H
#define CAR_H
#include<iostream>
using namespace std;
class Car
{
public:
    Car();

    void setBrand(const string &newBrand);

    void setModel(const string &newModel);

    void setYearModel(int newYearModel);

    void printData() const;

private:
    string brand;
    string model;
    int yearModel;
};
#endif // CAR_H
