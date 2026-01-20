#include <iostream>
using namespace std;

// Write a program to calculate the sum of first n natural numbers.
int main(){
    int n = 10;
    int sum = 0 ;
    for(int i = 1; i<=n; i++){
        sum += i;
    }
    cout<<"sum of number from 1 to "<<n <<" is "<<sum<<endl;
    return 0; 
}