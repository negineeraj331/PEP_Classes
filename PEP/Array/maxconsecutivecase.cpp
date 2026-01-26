#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int maxConsecutiveOnes(vector<int> &arr) {
        int maxCount = 0;
        int currentCount = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 1) {
                currentCount++;
                maxCount = max(maxCount, currentCount);
            } else {
                currentCount = 0;
            }
        }

        return maxCount;
    }
};

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1};

    Solution sol;
    cout << "Maximum consecutive 1s: " << sol.maxConsecutiveOnes(arr) << endl;

    return 0;
}
    