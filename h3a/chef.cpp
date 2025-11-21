#include "chef.h"
#include <iostream>
using namespace std;

Chef::Chef(const string& n) {
    this->name=n;
    cout << name << " konstruktori" << endl;
}

Chef::~Chef()
{
    cout << name << " destructori" << endl;
}

void Chef::makeSalad()
{
    cout << name << " is making salad" << endl;
}

void Chef::makeSoup()
{
    cout << name << " is making soup" << endl;
}

string Chef::getName(){
    return name;
}
