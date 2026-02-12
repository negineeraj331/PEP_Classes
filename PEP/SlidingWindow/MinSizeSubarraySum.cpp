//Minimum size subarray sum with explanation in comments
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Solution {
public:
   int minSubArrayLen(int target, vector<int>& nums) {
       int sz = nums.size();
       int ans = INT_MAX;


       for (int l=0, r=0, sum=0; r<sz; ++r) {
           sum += nums[r];


           while ((l+1) <= r && (sum-nums[l]) >= target) {
               sum -= nums[l];
               ++l;
           }


           if (sum >= target) {
               ans = min(ans, r-l+1);
           }
       }
       return (ans == INT_MAX ? 0 : ans);
   }
};
int main() {
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    Solution solution;
    int result = solution.minSubArrayLen(target, nums);
    cout << "The minimum length of a subarray with sum at least " << target << " is: " << result << endl;
    return 0;
}