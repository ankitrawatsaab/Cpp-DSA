
#include <iostream>
using namespace std;

//Null pointer is a pointer which is not pointing to any variable or memory location.
//It is used to indicate that the pointer is not pointing to any valid memory location.
//It is defined as a macro in C++ and it is equal to zero.
int main() {
    
    // int * ptr;
    // cout<< ptr<<end; //This will give garbage value because the pointer is not initialized and it is pointing to some random memory location.
    
    int* ptr = NULL ; 
    cout<<ptr<<endl;
    return 0;
}