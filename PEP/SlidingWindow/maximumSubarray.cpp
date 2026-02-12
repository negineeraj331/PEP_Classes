//maximum subarray 
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Solution {
public:
   int maxSubArray(vector<int>& nums) {
       int sz = nums.size();
       int ans = INT_MIN;


       for (int i=0, sum=0; i<sz; ++i) {
           sum = nums[i] + max(0, sum);
           ans = max(ans, sum);
       }


       return ans;
   }
};
int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution solution;
    int result = solution.maxSubArray(nums);
    cout << "The maximum sum of a subarray is: " << result << endl;
    return 0;
}