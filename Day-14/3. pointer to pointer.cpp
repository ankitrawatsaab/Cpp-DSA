// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// Pointer to pointer (double pointer)
int main() {
    int a =10;
    int* ptr = &a; 
    int** ptr2 = &ptr;
    
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;
    return 0;
}