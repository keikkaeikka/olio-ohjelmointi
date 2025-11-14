#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>

using namespace std;

class Student
{
public:
    Student();

    string getName() const;
    void setName(const string &newName);

    void setStudentNumber(int newStudentNumber);

    double getAverage() const;




    int getStudentNumber() const;

    void setAverage(double newAverage);

private:
    string name;
    int studentNumber;
    double average;
};

#endif // STUDENT_H
