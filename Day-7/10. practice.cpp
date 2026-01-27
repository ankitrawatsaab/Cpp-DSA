#include <iostream>
#include <climits>
using namespace std;

// 👉 WAF (Write A Function) to print all unique values of an array.
void printUniqueValues (int arr[], int size){
    for(int i=0; i<size; i++){
       bool isUnique=true;
       for(int j=0; j<size; j++ ){
           if(i!=j && arr[i]==arr[j]){
                isUnique = false;
                break;
           }
       }
       
       if(isUnique){
           cout<<arr[i]<<" ";
       }
    }
}

int main() {
    int arr[] = {4, 5, 4, 6, 7, 5, 8};
    int size = 7;
    printUniqueValues(arr,size);
    return 0;
}