#include <iostream>
using namespace std;

int main() {
    // incrementing a pointer
    int a = 10;
    int *ptr = &a;
    cout << ptr << endl;      // prints the address of a
    
    ptr++;                    // pointer arithmetic
    cout << ptr << endl;      // prints the address after incrementing by sizeof(int)

    ptr--;                    // pointer arithmetic
    cout << ptr << endl;      // prints the original address of a after decrementing by sizeof(int)
    return 0;
}

