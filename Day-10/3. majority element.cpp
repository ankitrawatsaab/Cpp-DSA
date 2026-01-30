#include <iostream>
#include <vector>
using namespace std;

// brute force approach
int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for(int val : nums){
            int freq = 0;
            for(int element : nums){
                if(element == val){
                    freq++;
                }
            }
            if(freq > n/2){
                return val;
            }
        }
        return -1;   // ✅ loop ke bahar
    }
 
int main() {
    vector<int> nums = {3, 2, 3};
    cout << "Majority Element: " << majorityElement(nums) << endl;
    return 0;
}