// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// De-refrence operator is used to get the value of the variable which is being pointed by the pointer variable.
int main() {
    int a =10;
    int *ptr = &a;
    int **ptr2 = &ptr;
    
    cout<<*(&a)<<endl;
    cout<<*(ptr)<<endl;
    
    cout<<*(ptr2)<<endl;
    cout<<*(&ptr)<<endl;
    
    
    return 0;
}