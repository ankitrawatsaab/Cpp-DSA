#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 6;
    
    // Arithmetic Operators
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // Relational Operators
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    // Logical Operators
    cout << "(a < b) && (a != b): " << ((a < b) && (a != b)) << endl;
    cout << "(a < b) || (a == b): " << ((a < b) || (a == b)) << endl;
    cout << "!(a < b): " << (!(a < b)) << endl;  
    
    // Unary Operators
    cout << "++a: " << ++a << endl; // Pre-increment
    cout << "b--: " << b-- << endl; // Post-decrement
    cout << "After b--, b: " << b << endl;


    return 0;
}