#include <iostream>
#include <vector>
using namespace std;

int singleElement(vector<int>& A) {
    int n = A.size();

        if(n == 1) return A[0];

        int start = 0, end = n - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (mid == 0 && A[0] != A[1]) return A[0];
            if (mid == n-1 && A[n - 1] != A[n - 2]) return A[n - 1];

            if (A[mid] != A[mid-1] && A[mid] != A[mid+1]) return A[mid];

            if (mid % 2 == 0) {
                if (A[mid] == A[mid + 1])
                    start = mid + 1;
                else
                    end = mid - 1;
            } else {
                if (A[mid] == A[mid - 1])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return -1;
        
        
}

int main() {
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    int result = singleElement(nums);
    cout<<result<<endl;
    return 0;
}
