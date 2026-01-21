#include <iostream>
using namespace std;

// Output:
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 

int main(){
    for(int i=0; i<5; i++){
        char ch='A';
        for(int j=1; j<=5; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}