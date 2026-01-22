#include <iostream>
using namespace std;

//sum of n number
int sumOfNumber(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    return sum;
}
int main() {
    cout<<"sum of number 1 to n is "<< sumOfNumber(10)<<endl;
    return 0;
}