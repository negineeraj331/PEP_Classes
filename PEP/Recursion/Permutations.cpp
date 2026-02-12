//permutations
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  int sz;
  vector<vector<int>> ans;

  void func(vector<int> &nums, int ind) {
    if (ind >= sz) {
      ans.push_back(nums);
      return;
    }

    for (int i = ind; i < sz; ++i) {
      swap(nums[ind], nums[i]);
      func(nums, ind + 1);
      swap(nums[ind], nums[i]);
    }
  }

  vector<vector<int>> permute(vector<int> &nums) {
    sz = nums.size();
    func(nums, 0);

    return ans;
  }
};

int main() {
    vector<int> arr = {1, 2, 3};
    Solution solution;
    vector<vector<int>> result = solution.permute(arr);
    cout << "Permutations of the array: " << endl;
    for (const auto &perm : result) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}