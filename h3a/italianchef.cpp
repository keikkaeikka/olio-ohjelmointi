#include "italianchef.h"
#include<iostream>
using namespace std;

ItalianChef::ItalianChef(const string& n)
    : Chef(n)
{
    cout << "ItalianChef " << name <<  " konstruktori" <<endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << name << " destructori" <<endl;
}

void ItalianChef::makePasta()
{
    cout << name << " is making pasta" << endl;
}

