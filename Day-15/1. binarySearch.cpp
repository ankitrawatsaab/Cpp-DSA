#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector <int> nums, int target){
    int n = nums.size();
    int start = 0, end = n-1;
    while(start<=end){
        int mid = start + (end - start)/2;
        
        if(nums[mid] < target){
            start = mid + 1;
        }
        else if(nums[mid] > target){
            end = mid -1;
        }else{
            return mid;
        }
    }
    return -1;
    
}
int main() {
    vector <int> a = {-1,0,3,4,5,9,12};
    int t = 12;
    int result = binarySearch(a, t);
    cout<<result<<endl;
    return 0;
}