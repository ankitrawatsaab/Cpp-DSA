#include <iostream>
#include <vector>
using namespace std;

// book allocation problem
bool isValid(vector<int> &arr, int n , int m, int maxAllowedPages){
    int student = 1, pages = 0;
    for(int i =0; i<n; i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }
        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }else{
            student++; pages = arr[i];
        }
    }
    
    return student <= m;
}
    
int bookAllocated(vector<int> &arr, int n , int m){
    if(m>n) return -1;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int start = 0, end = sum ;
    int ans = -1;
    while(start <= end){
        int mid = start + (end -start)/ 2;
        if(isValid(arr, n , m , mid)){
            ans = mid; end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1,2,3,4};
    int n = 4;
    int m = 2;
    cout<< bookAllocated(arr, n, m);
    return 0;
}