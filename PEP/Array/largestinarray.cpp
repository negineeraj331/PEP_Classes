//largest in array
#include <iostream>
#include <vector>
using namespace std;
int largest(vector<int> &arr) {
    int maxVal = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    return maxVal;
}

int main() {
    vector<int> arr = {1, 8, 7, 56, 90};

    cout << largest(arr);

    return 0;
}