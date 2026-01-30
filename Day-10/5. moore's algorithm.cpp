#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int freq = 0, ans = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (freq == 0) {
            ans = nums[i];
        }

        if (nums[i] == ans) {
            freq++;
        } else {
            freq--;
        }
    }

    int count = 0;
    for(int val : nums) {
        if(val == ans) {
            count++;
        }
    }
    if(count <= n / 2) {
        return -1; // No majority element
    }
    return ans;
}

int main() {
    vector<int> nums = {3, 2, 3};
    cout << "Majority Element: " << majorityElement(nums) << endl;
    return 0;
}