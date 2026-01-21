#include <iostream>
using namespace std;

// Pattern:
// A
// B B
// C C C
// D D D D
// E E E E E

int main(){
    int n=5;
    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    return 0;
}