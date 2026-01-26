#include <iostream>
using namespace std;

int bitwiseComplement(int n){
    int m = n;
    int mask =0;
    //edge case 
    if(n==0){
        return 1;
    }
    //logic 
    while(m!=0){
        mask = (mask<<1) | 1;
        m = m >> 1 ;
    }
    int ans = (~n) & mask;
    return ans;
}
int main() {
    int n =10;
    cout<< "complement of n is : "<< bitwiseComplement(n);
    return 0;
}