#include "car.h"
#include "rectangle.h"
#include"student.h"
#include <iostream>
#include <memory>


using namespace std;

int main()
{
    Car myCar;

    myCar.setBrand("Tesla");
    myCar.setModel("Model 3");
    myCar.setYearModel(2020);
    myCar.printData();

    Rectangle* myRectangle = new Rectangle;

    myRectangle->setWidth(6);
    myRectangle->setHeight(4);
    std::cout << "Area: " << myRectangle->getArea() << std::endl;
    std::cout << "Circumference: " << myRectangle->getCircum() << std::endl;
    delete myRectangle;
    myRectangle=nullptr;


    unique_ptr<Student> objectStudent =  make_unique<Student>();

    objectStudent->setName("Eikka");
    objectStudent->setStudentNumber(1234);
    objectStudent->setAverage(9.9);
    cout << "Name:" << objectStudent->getName() << endl;
    cout << "Student Number:" << objectStudent->getStudentNumber() << endl;
    cout << "Average:" << objectStudent->getAverage() << endl;


    system("pause");
    return 0;
}
