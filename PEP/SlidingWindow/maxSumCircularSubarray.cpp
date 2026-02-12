//Max Sum circular subarray
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
class Solution {
public:
   int maxSubarraySumCircular(vector<int>& nums) {
       int sz = nums.size();
       int ans = INT_MIN;


       for (int i=0, sum=0; i<sz; ++i) {
           sum = nums[i] + max(0, sum);
           ans = max(ans, sum);
       }


       vector<int>prefix_sum = nums;


       for (int i=1; i<sz; ++i) {
           prefix_sum[i] += prefix_sum[i-1];
       }


       vector<int> prefix_sum_mx = prefix_sum;


       for (int i=1; i<sz; ++i) {
           prefix_sum_mx[i] = max(prefix_sum_mx[i], prefix_sum_mx[i-1]);
       }


       for (int i=sz-1, suf_sum=0; i>0; --i) {
           suf_sum += nums[i];
           int loc_res = suf_sum + prefix_sum_mx[i-1];
           ans = max(ans, loc_res);
       }


       return ans;
   }
};
int main() {
    vector<int> nums = {1, -2, 3, -2};
    Solution solution;
    int result = solution.maxSubarraySumCircular(nums);
    cout << "The maximum sum of a circular subarray is: " << result << endl;
    return 0;
}