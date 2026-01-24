#include <iostream>
using namespace std;

// Function to convert decimal number to binary number
int decToBin(int decNum){
    int binNum = 0, power = 1;
    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        binNum += (rem * power);
        power *= 10;
    }
    return binNum;
}

int main(){
    int n =10;
    cout<<"Binary of 1 to 10 is : "<<endl;
    for(int i=1; i<=n; i++){
        cout<< i << " : " << decToBin(i) << endl;
    }
    return 0;
}