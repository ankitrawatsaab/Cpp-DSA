#include <iostream>
using namespace std;
#include <climits>
#include <algorithm>

// Find the index of a given key in an array
int main() {
    int arr[6] = {-73, 45, 0, 89, -12, 67};
    int size = 6;
    int key = 89;
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            cout<< "index of "<<key<<" : "<<i;
            
        }
    }
    return 0;
}