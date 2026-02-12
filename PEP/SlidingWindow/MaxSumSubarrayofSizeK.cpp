//max sum subarray of size K
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int sz = arr.size();
        int ans = 0;

        for (int i=0, sum=0; i<sz; ++i) {
            sum += arr[i];
            sum -= ((i-k) > -1) ? arr[i-k] : 0;
            ans = max(ans, sum);
        }

        return ans;
    }
};
int main() {
    vector<int> arr = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4;
    Solution solution;
    int result = solution.maxSubarraySum(arr, k);
    cout << "The maximum sum of a subarray of size " << k << " is: " << result << endl;
    return 0;
}