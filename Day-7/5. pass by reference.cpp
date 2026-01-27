#include <iostream>
using namespace std;

void changeArr(int arr[] , int size){
    cout<<"change array function"<<endl;
    for(int i=0;i<size; i++){
        arr[i] = 2 * arr[i];
        cout<<arr[i]<<endl; 
    }
}

int main() {
    int arr[] ={1,2,3}; 
    changeArr(arr, 3);
    cout<<"orignal array"<<endl;
    //orginal array
    for(int i=0; i<3; i++){
        arr[i];
        cout<<arr[i]<<endl;
    }
    
  
    return 0;
}