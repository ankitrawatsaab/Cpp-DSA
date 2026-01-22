#include <iostream>
using namespace std;

//factorial of n number
long long factorial(int n){
    long long fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}
int main() {
    cout<<"Factorial is "<<factorial(10)<<endl;
    return 0;
}