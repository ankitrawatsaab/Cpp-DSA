#include <iostream>
using namespace std;

// 👉 Pow(x, n)
// (LeetCode Problem #50)
double binaryExponential(double x, int n){
    if(n == 0) return 1; 
    if(x == 0) return 0; 
    if(x == 1) return 1;
    if(x == -1 && n % 2 == 0) return 1;
    if(x == -1 && n % 2 != 0) return -1;
    
    long binNum = n; 
    if(n < 0){
        x = 1 / x;
        binNum = -binNum;
    }

    double ans = 1;
    while(binNum > 0){
        if(binNum % 2 == 1){
            ans *= x;
        }
        x *= x;
        binNum /= 2;
    }
    return ans;
}

int main() {
    double x = 5;
    int n = 10;
    cout << binaryExponential(x, n);
    return 0;
}
