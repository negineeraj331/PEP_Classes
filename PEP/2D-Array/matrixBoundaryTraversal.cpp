// matrix boundary traversal
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> boundaryTraversal(vector<vector<int>> &v) {
    int m = v.size();
    int n = v[0].size();

    vector<int> ans;

    for (int i = 0; i < n; ++i) {
      ans.push_back(v[0][i]);
    }

    for (int i = 1; i < m; ++i) {
      ans.push_back(v[i][n - 1]);
    }

    if (m > 1) {
      for (int i = n - 2; i > -1; --i) {
        ans.push_back(v[m - 1][i]);
      }
    }

    if (n > 1) {
      for (int i = m - 2; i > 0; --i) {
        ans.push_back(v[i][0]);
      }
    }

    return ans;
  }
};
int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    Solution solution;
    vector<int> result = solution.boundaryTraversal(mat);
    cout << "Boundary traversal of the matrix: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}