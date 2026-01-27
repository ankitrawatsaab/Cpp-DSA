#include <iostream>
using namespace std;
#include <climits>
#include <algorithm>


int main() {
    int arr[6] = {-73, 45, 0, 89, -12, 67};
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    //1st approach
    for(int i=0; i<size; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
        if(arr[i]>largest){
          largest = arr[i];
        }
        
    }
    
    //2nd approach
    for(int i=0; i<size; i++){
        
        largest = max(arr[i],largest);
        smallest = min(arr[i],smallest);
     }
    cout<<"smallest value is "<<smallest<<endl;
    cout<<"largest value is "<<largest<<endl;
    return 0;
}