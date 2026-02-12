// search in matrix
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  bool searchMatrix(vector<vector<int>> &v, int tar) {
    int m = v.size();
    int n = v[0].size();

    for (int i = 0, j = n - 1; i < m && j > -1;) {
      if (v[i][j] == tar)
        return 1;

      if (v[i][j] < tar) {
        ++i;
      } else {
        --j;
      }
    }

    return 0;
  }
};
int main() {
    vector<vector<int>> mat = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int target = 5;
    Solution solution;
    bool result = solution.searchMatrix(mat, target);
    if (result) {
        cout << "Element " << target << " found in the matrix." << endl;
    } else {
        cout << "Element " << target << " not found in the matrix." << endl;
    }
    return 0;
}