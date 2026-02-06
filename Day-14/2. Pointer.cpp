// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// Pointer basics
int main() {
    int a =10;
    int* ptr = &a; 
    
    // Print the value of pointer 'ptr' and the address of variable 'a'
    cout<<ptr <<endl;
    cout<<&a <<endl;

    // Print the address of pointer 'ptr'    
    cout<< &ptr <<endl;
    return 0;
}