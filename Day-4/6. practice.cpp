#include <iostream>
using namespace std;

//sum of digits in a number

int sumOfDigit(int num){
    int digitSum = 0;
    while(num > 0){
        int lastDigit = num%10;
        num/=10;
        digitSum+=lastDigit;
    }
    return digitSum;
}
int main() {
    cout<<"Sum of Digit in number is "<<sumOfDigit(9999)<<endl;
    return 0;
}