#include "classa1.h"
#include "classa2.h"
#include "classb.h"
#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 6;
    int *pointerA = &a;
    int & refA = a;

    cout << "a:n arvo on:" << a << " ja osoite on: " << &a << endl;
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    // kokeiltu refA = &b; // ei ole sallittua
    refA = b; // tama muutti a arvon samaksi kuin b
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo: " << refA << endl;
    pointerA = &b; // tama onnistui ja nyt pointerA osoittaa muuttujaan b
    cout << "pointerA osoittaa nyt osoitteeseen: " << pointerA << endl;
    cout << "pointerA:n osoittaman muistipaikan arvo: " << *pointerA << endl;
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl;

    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2 "<<objA2.getBinfo()<<endl;
    cout<<endl;

    return 0;
}
