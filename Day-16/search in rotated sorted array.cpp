#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int target){
    int n = nums.size();
    int start = 0, end = n - 1;

    while (start <= end){
        int mid = start + (end - start) / 2;

        if (nums[mid] == target){
            return mid;
        }

        if (nums[start] <= nums[mid]){
            if (nums[start] <= target && target <= nums[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        else{
            if (nums[mid] <= target && target <= nums[end]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main(){
    vector <int> a = {4,5,6,7,0,1,2};
    int t = 0;
    int result = search(a, t);
    cout<<result<<endl;
    return 0;
}