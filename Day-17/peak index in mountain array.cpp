#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start = 1, end = n-2;

        while(start<= end){
            int mid = start + (end - start)/2;
            
            if(arr[mid-1] < arr[mid] &&  arr[mid] > arr[mid+1]){
                return mid;
            }

            if(arr[mid-1] < arr[mid]){ 
                start = mid +1 ;
            }
            else{
                end = mid-1;
            }
        }
        return -1;
        
}

int main() {
    vector <int> a = {0,1,0};
    int result = peakIndexInMountainArray(a);
    cout<<result<<endl;
    return 0;
}
