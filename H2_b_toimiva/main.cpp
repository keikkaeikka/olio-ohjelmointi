#include <iostream>
#include "car.h"
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;
    carList.emplace_back("Tesla","Model 3",2020);
    carList.emplace_back("Peugeot","407",2005);
    carList.emplace_back("Fiat","Punto",2005);

    carList[1].printData();

    for(int x=0; x<=2; x++){
        carList[x].printData();
    }








    return 0;
}
