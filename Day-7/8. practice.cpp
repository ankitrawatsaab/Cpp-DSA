#include <iostream>
using namespace std;
// 👉 WAF (Write A Function) to calculate sum and product of all numbers of an array.

int add(int arr[], int size){
    int sum=0;
    for(int i=0; i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int multiply(int arr[], int size){
    int product = 1;
    for(int i=0; i<size;i++){
        product*=arr[i];
    }
    return product;
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    
    int sum = add(arr,size);
    int product = multiply(arr,size);
    
    cout<<"sum : "<<sum<<endl;
    cout<<"product : "<<product<<endl;

    return 0;
}