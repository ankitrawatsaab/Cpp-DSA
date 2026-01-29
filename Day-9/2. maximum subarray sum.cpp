#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5; //size
    
    int maxSum = INT_MIN;
    for(int start = 0; start<n; start++){
        int currentSum = 0; 
        for(int end=start; end<n; end++){
            currentSum+= arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout<<"max sum of subarray is "<<maxSum<<endl;;
    return 0;
}