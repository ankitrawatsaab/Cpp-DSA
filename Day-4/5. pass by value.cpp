#include <iostream>
using namespace std; 
// Pass by Value

void changeX(int x){
    x = 2*x; 
    cout<<"x = "<<x<<endl;
}

int main() { 
    int x = 5; 
    changeX(x); 
    cout<<"x = "<<x<<endl; 
    return 0; 
}

//output:
// x = 10  copy value modified inside function
// x = 5  original value remains unchanged