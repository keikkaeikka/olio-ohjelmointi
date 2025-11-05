#include <iostream>
#include <stdexcept>

using namespace std;

void calcSum(int a,int b) {
    int summa;
    summa = a + b;
    cout << summa << endl;
}
void calcDiv(int a, int b) {
    int jako;
    if (b == 0) {
            cout<< "Jakaja ei voi olla nolla!" << endl;
            return;
    }
            jako = a / b;
    cout << jako << endl;
}
int retSum (int a, int b) {
    return a + b;
}

float retDiv (float a, float b) {
    if (b == 0) {
         throw std::runtime_error("jakaja ei saa olla nolla!");
    }
    return  a / b;
}
int main()
{
    int a;
    int b;
    int result1;
    float result2;

    cout << "Anna luku a:" << endl;
    cin >> a;
    cout << "Anna luku b:" << endl;
    cin >> b;
    calcSum(a,b);
    calcDiv(a,b);
    try {
        result1 = retSum(a, b);
        result2 = retDiv(a, b);

        cout << a  << "+" << b << "=" << result1 << endl;
        cout << a  << "/" << b << "=" << result2 << endl;
    } catch (const runtime_error& e) {
        cout << "Virhe: " << e.what() << endl;
    }
    return 0;
}

