//Palindrome String using recursion
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
  bool isPalindrome(string &str, int ind = 0) {
    int sz = str.size();

    if (ind >= sz / 2) {
      return 1;
    }

    return str[ind] == str[sz - 1 - ind] && isPalindrome(str, ind + 1);
  }
};
int main() {
    string str = "madam";
    Solution solution;
    bool result = solution.isPalindrome(str);
    if (result) {
        cout << "\"" << str << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << str << "\" is not a palindrome." << endl;
    }
    return 0;
}