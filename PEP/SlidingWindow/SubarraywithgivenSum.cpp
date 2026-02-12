//subarray with given sum
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int sz = arr.size();
        vector<int> ans = {-1};

        for (int l=0, r=0, sum=0; r<sz; ++r) {
            sum += arr[r];

            while (l<r && sum>target) {
                sum -= arr[l];
                ++l;
            }

            if (sum == target) {
                ans = {l+1, r+1};
                break;
            }
        }

        return ans;
    }
};
int main() {
    vector<int> arr = {1, 2, 3, 7, 5};
    int target = 12;
    Solution solution;
    vector<int> result = solution.subarraySum(arr, target);
    if (result.size() == 1 && result[0] == -1) {
        cout << "No subarray with the given sum was found." << endl;
    } else {
        cout << "Subarray with the given sum found at indices: " << result[0] << " to " << result[1] << endl;
    }
    return 0;
}