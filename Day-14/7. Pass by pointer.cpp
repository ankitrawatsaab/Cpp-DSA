// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// Pass by pointer
void changeX(int* x){
    *x = 20;
} 
int main() {
    int x =10;
    changeX(&x);
    cout<<x <<endl;
    
    return 0;
}