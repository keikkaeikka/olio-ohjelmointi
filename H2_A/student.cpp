#include "student.h"

Student::Student() {}

string Student::getName() const { return name; }

void Student::setName(const string &newName) { name = newName; }

void Student::setStudentNumber(int newStudentNumber) {
  studentNumber = newStudentNumber;
}

double Student::getAverage() const { return average; }

int Student::getStudentNumber() const { return studentNumber; }

void Student::setAverage(double newAverage) { average = newAverage; }
