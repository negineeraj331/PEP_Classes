//reverse array in groups of given size
#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:

    void reverseInGroups(vector<int> &arr, int k) {
        int sz = arr.size();
        int i = 0;

        while (i<sz) {
            int l = i;
            int r = min(sz-1, i + k - 1);

            while (l < r) {
                swap(arr[l], arr[r]);
                ++l, --r;
            }

            i += k;
        }
    }
};
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 3;
    Solution solution;
    solution.reverseInGroups(arr, k);
    cout << "Array after reversing in groups of size " << k << ": ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}