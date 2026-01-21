#include <iostream>
using namespace std;

// triangle pattern:
// 1
// 2 2
// 3 3 3
// 4 4 4 4

int main(){
    int n=4;
    int count = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<count<<" ";
        }
        count++;
        cout<<endl;
    }
    return 0;
}