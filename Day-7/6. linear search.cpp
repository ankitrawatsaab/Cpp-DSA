#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i<size; i++){
        if(arr[i]==target){
            cout<<"index : "<<i; 
        }
    }
    return -1;
}
int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;
    int target = 50;
    
    int ans = linearSearch(arr,size,target);
    cout<<ans;
    return 0;
}