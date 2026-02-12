// print matrix in snake pattern
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> snakePattern(vector<vector<int>> &v) {
    int sz = v.size();
    vector<int> ans(sz * sz);

    for (int i = 0; i < sz; ++i) {
      for (int j = 0; j < sz; ++j) {
        int actualJ = (i & 1) ? sz - j - 1 : j;
        ans[(sz * i) + j] = v[i][actualJ];
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
    vector<int> result = solution.snakePattern(mat);
    cout << "Matrix in snake pattern: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}