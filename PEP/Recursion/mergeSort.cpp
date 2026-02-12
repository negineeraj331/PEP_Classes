//Merge sort using recursion
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  int sz;

  void merge(vector<int> &v, int l, int r) {
    int m = l + ((r - l) >> 1);
    vector<int> tmp(r - l + 1);
    int i = l;
    int j = m + 1;
    int k = 0;

    while (i <= m && j <= r) {
      if (v[i] < v[j]) {
        tmp[k] = v[i];
        ++k, ++i;
      } else {
        tmp[k] = v[j];
        ++j, ++k;
      }
    }

    while (i <= m) {
      tmp[k++] = v[i++];
    }

    while (j <= r) {
      tmp[k++] = v[j++];
    }

    for (int i = l; i <= r; ++i) {
      int j = i - l;
      v[i] = tmp[j];
    }
  }

  void mergeSort(vector<int> &v, int l, int r) {
    if (l >= r)
      return;

    int m = l + ((r - l) >> 1);
    mergeSort(v, l, m);
    mergeSort(v, m + 1, r);

    merge(v, l, r);
  }

  vector<int> sortArray(vector<int> &nums) {
    sz = nums.size();
    mergeSort(nums, 0, sz - 1);

    return nums;
  }
};
int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    Solution solution;
    vector<int> result = solution.sortArray(arr);
    cout << "Sorted array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}