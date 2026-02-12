//binary search using recursion
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
  int sz;

  int searchAux(const vector<int> &v, int tar, int l, int r) {
    if (l > r)
      return -1;

    int m = l + ((r - l) >> 1);

    if (v[m] == tar)
      return m;

    if (v[m] < tar) {
      l = m + 1;
    } else {
      r = m - 1;
    }

    return searchAux(v, tar, l, r);
  }

  int search(vector<int> &nums, int target) {
    sz = nums.size();

    return searchAux(nums, target, 0, sz - 1);
  }
};
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 7;
    Solution solution;
    int result = solution.search(arr, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}
