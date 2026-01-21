#include <iostream>
using namespace std;

// flyod's triangle pattern:
// 1
// 2 3
// 4 5 6
// 7 8 9 10

int main(){
    int n=4;
    int count=1;
    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}