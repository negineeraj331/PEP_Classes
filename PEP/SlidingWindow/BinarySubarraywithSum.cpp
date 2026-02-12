//Binary Subarrays with sum
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
   int sz;


   int getUpto(vector<int>&nums, int goal) {
       int ans = 0;


       for (int l=0, r=0, sum=0; r<sz; ++r) {
           sum += nums[r];


           while (l<r && sum>goal) {
               sum -= nums[l];
               ++l;
           }


           if (sum <= goal) {
               ans += r - l + 1;
           }
       }


       return ans;
   }


   int numSubarraysWithSum(vector<int>& nums, int goal) {
       sz = nums.size();
       int upto_goal = getUpto(nums, goal);
       int upto_goal_1 = getUpto(nums, goal-1);


       return upto_goal - upto_goal_1;
   }
};
int main() {
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;
    Solution solution;
    int result = solution.numSubarraysWithSum(nums, goal);
    cout << "The number of subarrays with sum equal to " << goal << " is: " << result << endl;
    return 0;
}
