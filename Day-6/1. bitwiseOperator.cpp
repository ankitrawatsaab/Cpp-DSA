#include <iostream>
using namespace std;

int main() {
    int a = 4;      // 0100 in binary
    int b = 8;      // 1000 in binary
    
    cout << "a & b = " << (a & b) << endl;   // Bitwise AND
    cout << "a | b = " << (a | b) << endl;   // Bitwise OR
    cout << "a ^ b = " << (a ^ b) << endl;  // Bitwise XOR
    cout<< "a<<1 = " << (a << 1) << endl; // Left Shift
    cout<< "b>>1 = " << (b >> 1) << endl; // Right Shift

    return 0;
}