#include <iostream>
using namespace std;

// Take input from user and print it using loop
int main() {
    int marks[5] ;   // size fixed
    for(int i=0; i<5; i++){
        cin>>marks[i];
        cout<<marks[i]<<endl;
    }
   
    return 0;
}