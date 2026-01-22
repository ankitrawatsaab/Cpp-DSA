#include <iostream>
using namespace std;
// Function to check if a number is prime or not;
string primeNumber(int n){
    bool isprime = true;
    for(int i=2; i<=n; i++){
        if(n%i==0){
            return "Non Prime Number"; 
        }
    }
    return "Prime Number";
}

int main() {
    cout<<"20 is the "<<primeNumber(20)<<endl;
    return 0;
}