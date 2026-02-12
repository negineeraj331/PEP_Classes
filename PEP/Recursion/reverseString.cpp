//reverse string using recursion
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
  void reverseString(vector<char> &s, int ind = 0) {
    int sz = s.size();

    if (ind >= sz / 2)
      return;

    int mirrI = sz - ind - 1;
    swap(s[ind], s[mirrI]);

    reverseString(s, ind + 1);
  }
};

int main() {
    vector<char> str = {'h', 'e', 'l', 'l', 'o'};
    Solution solution;
    solution.reverseString(str);
    cout << "Reversed string: ";
    for (char c : str) {
        cout << c;
    }
    cout << endl;
    return 0;
}