#include <iostream>
using namespace std;
// Function to convert binary number to decimal number
int binToDec(int BinNum){
    int power = 1; 
    int decNum = 0;
    while(BinNum>0){
        int rem = BinNum % 10;
        decNum += rem * power;
        BinNum /=10;
        power *= 2;
    }
    return decNum;
}

int main(){
    int binaryNumber = 110010;
    cout<<"dcimal number of n is : "<< binToDec(binaryNumber) <<endl;
   
    return 0;
}