#ifndef CAR_H
#define CAR_H
#include "engine.h";
#include "wheel.h";
class Car
{
public:
    Car();
    Car(string, string);
    string getModel() const;
    void setModel(const string &newModel);

    string getBrand() const;
    void setBrand(const string &newBrand);

    void setEngine();

    void setWheels();

    void printDetails();

private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;
    string brand;
};

#endif // CAR_H
