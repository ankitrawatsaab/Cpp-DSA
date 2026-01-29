#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int> nums) {
    int currentSum = 0, maxSum = INT_MIN;

    for (int value : nums) {
        currentSum += value;
        maxSum = max(currentSum, maxSum);

        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;
}

int main() {
    vector<int> nums = {3, -4, 5, 4, -1, 7, -8};
    cout << maxSubArray(nums);
    return 0;
}
