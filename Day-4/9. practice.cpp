#include <iostream>
using namespace std;
// Function to check if a number is prime or not
bool isPrime(int n){
    if(n <= 1) return false;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

// Function to print all prime numbers up to n
void printPrime(int n){
    for(int i = 2; i <= n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
}

int main() {
    printPrime(20);
    return 0;
}
