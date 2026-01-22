#include <iostream>
using namespace std;

// Function to calculate factorial
long long factorial(int n){
    long long  fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
// Function to calculate nCr
long long nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);
    
    return fact_n / (fact_r* fact_nmr);
}

int main() {
    cout<< "nCr bionomial cofficient is "<<nCr(8,2)<<endl;
    return 0;
}