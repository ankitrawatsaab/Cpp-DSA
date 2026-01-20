#include <iostream>
using namespace std;

// Write a C++ program to calculate the sum of all multiples of 3 from 1 to 100.
int main(){
    int n = 100;
    int sum = 0;

    for(int i = 1; i<=n ; i++){
        if(i%3 == 0 ){
            sum += i;
        }
    }
    cout << "The sum of all multiples of 3 from 1 to " << n << " is: " << sum << endl;
    return 0;
}