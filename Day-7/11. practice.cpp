#include <iostream>
#include <climits>
using namespace std;

// 👉 WAF (Write A Function) to print the intersection of two arrays.
void intersection (int arr1[], int size1, int arr2[], int size2){
    for(int i=0; i<size1; i++){
       for(int j=0; j<size2; j++ ){
           if(arr1[i]==arr2[j]){
                cout << arr1[i] << " ";
                break;   // same element dobara print na ho
           }
       }
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};
    int size1 = 4;
    int size2 = 4;
    intersection(arr1,size1, arr2,size2);
    return 0;
}