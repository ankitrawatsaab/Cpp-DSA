// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   int a =5;
   int *p = &a;
   int **q = &p;

   cout<<*p<<endl; //This will give the value of a which is 5 because p is pointing to a.
   cout<<**q<<endl; //This will also give the value of a which is 5 because q is pointing to p and p is pointing to a.
   cout<<*q<<endl; //This will give the address of p because q is pointing to p.
   cout<<p<<endl; //This will give the address of q because q is a pointer variable and it is stored in some memory location.
    
    return 0;
}