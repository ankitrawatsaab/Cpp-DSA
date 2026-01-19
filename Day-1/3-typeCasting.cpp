// TypeCasting - Converting one data type to another data type.
#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    // 1. Implicit typeCasting - done by compiler automatically.
    float pie = 3.14f;
    double dPie = pie; // float to double
    cout<<"Value of dPie : " << dPie << endl;
    cout<<"Type of dPie : " << typeid(dPie).name() << endl;

    // 2. Explicit typeCasting - done by programmer manually.
    double price = 100.99;
     int newPrice = (int)price; // double to int
    cout<<"Value of newPrice : " << newPrice << endl;
    cout<<"Type of newPrice : " << typeid(newPrice).name() << endl;
    return 0;
}