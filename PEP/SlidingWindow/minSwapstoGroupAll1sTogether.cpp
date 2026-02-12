//min swaps to group all 1s together
#include <iostream>
#include <vector>
#include <climits>
#include <numeric>
using namespace std;
class Solution {
public:
   int minSwaps(vector<int>& nums) {
       int sz = nums.size();
       int tot = accumulate(begin(nums), end(nums), 0);
       int cur_sum = 0;

       for (int i=0; i<tot; ++i) {
           cur_sum += nums[i];
       }
       int ans = tot - cur_sum;

       for (int i=1; i<sz; ++i) {
           int window_end = (i+tot-1) % sz;
           int window_start = (i-1) % sz;

           cur_sum += nums[window_end];
           cur_sum -= nums[window_start];
           ans = min(ans, tot-cur_sum);
       }

       return ans;
    }
};
int main() {
    vector<int> nums = {1, 0, 1, 0, 1};
    Solution solution;
    int result = solution.minSwaps(nums);
    cout << "The minimum number of swaps required to group all 1s together is: " << result << endl;
    return 0;
}