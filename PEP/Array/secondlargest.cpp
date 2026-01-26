// secondlargest element in an array
#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int first = INT_MIN, second = INT_MIN;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > first) {
                second = first;
                first = arr[i];
            }
            else if (arr[i] > second && arr[i] < first) {
                second = arr[i];
            }
        }

        // if second largest does not exist
        if (second == INT_MIN)
            return -1;

        return second;
    }
};

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};

    Solution sol;
    int result = sol.getSecondLargest(arr);
    if (result != -1) {
        cout << "The second largest element is " << result << endl;
    } else {
        cout << "There is no second largest element." << endl;
    }

    return 0;
}