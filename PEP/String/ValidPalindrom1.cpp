// valid palindrome: A palindrome is a string that reads the same backward as forward, ignoring spaces, punctuation, and capitalization
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
class Solution {
public:
    bool isPalindrome(string &s) {
        int sz = s.size();
        int l = 0;
        int r = sz - 1;

        while (l < r) {
            if (!isalnum(s[l])) {
                ++l;
            } else if (!isalnum(s[r])) {
                --r;
            } else if (isalpha(s[l]) && isalpha(s[r])) {
                if (tolower(s[l]) != tolower(s[r])) {
                    return false;
                }
                ++l, --r;
            } else if (isdigit(s[l]) && isdigit(s[r])) {
                if (s[l] != s[r]) {
                    return false;
                }
                ++l, --r;
            } else {
                return false;
            }
        }

        return true;
    }
};
int main() {
    string s = "A man, a plan, a canal: Panama";
    Solution solution;
    bool result = solution.isPalindrome(s); 
    if (result) {
        cout << "\"" << s << "\" is a valid palindrome." << endl;
    } else {
        cout << "\"" << s << "\" is not a valid palindrome." << endl;
    }
    return 0;
}