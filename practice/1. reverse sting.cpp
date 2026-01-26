#include <iostream>
using namespace std;
#include <climits>

int reverse(int n){
    int ans = 0;
    while(n!=0){
        int lastDigit = n%10;
        
        if((ans>INT_MAX/10) || (ans<INT_MIN)){
            return 0;
        }
        ans = ans * 10 + lastDigit;
        n/=10;
    }
    return ans;
}
int main() {
    int number = 74638;
    cout<<"reverse of the "<<number<<" is "<<reverse(number);
    return 0;
}