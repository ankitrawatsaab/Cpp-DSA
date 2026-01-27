 #include <iostream>
#include <climits>
using namespace std;

// 👉 WAF (Write A Function) to swap the maximum and minimum number of an array.
void swapMaxAndMin (int arr[], int size){
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int minIndex=0, maxIndex=0;
    
    for(int i=0; i<size; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            minIndex = i;
        }
        if(arr[i]>largest){
            largest = arr[i];
            maxIndex = i;
        }
    }
    swap(arr[minIndex],arr[maxIndex]);
}

int main() {
    int arr[] = {3, 7, 1, 9, 4};
    int size = 5;
    swapMaxAndMin(arr,size);

    for(int i=0; i<size; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}