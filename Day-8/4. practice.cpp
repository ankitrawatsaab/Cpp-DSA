// LeetCode Problem: 136  Single Number
#include <iostream>
#include <vector>
using namespace std;


int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int value: nums){
            ans ^= value;
        }
        return ans;
}

int main() {
    vector<int> nums = {4,1,2,1,2};
    cout << "The single number is: " << singleNumber(nums) << endl;
    return 0;
}
