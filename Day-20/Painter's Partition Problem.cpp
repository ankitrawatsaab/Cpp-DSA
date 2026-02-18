#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int n , int m, int maxAllowedTime){
    int painter = 1, time=0;
    for(int i=0; i<n; i++){
        if(arr[i] > maxAllowedTime) return false; 
        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];
        }else{
            painter ++;
            time = arr[i];
        }
    }
    return painter <= m;
}

int painterPartition(vector <int> &arr,int n,int m){
    if(m>n) return -1;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    
    int start = *max_element(arr.begin(), arr.end());
    int end = sum;
    int ans = -1;
    
    while(start<=end){
        int mid = start + (end-start)/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end= mid-1;
        }else{
            start = mid+1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {40,30,20,10};
    int n = 4;
    int m =4;
    cout<< painterPartition(arr,n,m);
    return 0;
}