#include <iostream>
using namespace std;

//sum
int sum(int a ,int b){
    int c = a+b;
    return c;
}
//minmum of 2 number
int minNumber(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int main() {
    cout<<"sum of two value is "<< sum(10,20)<<endl;
    cout<<"minimum number is "<< minNumber(10,15)<<endl;
    return 0;
}