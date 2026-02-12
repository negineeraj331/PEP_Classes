//is subsequence
// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
// A subsequence of a string is a new string that is formed from the original   
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isSubsequence(string &s, string &t) {
        int szs = s.size();
        int szt = t.size();
        int ptrS = 0;

        for (int i=0; i<szt && ptrS<szs; ++i) {
            if (s[ptrS] == t[i]) {
                ++ptrS;
            }
        }

        return (ptrS == szs);
    }
};
int main() {
    string s = "abc";
    string t = "ahbgdc";
    Solution solution;
    bool result = solution.isSubsequence(s, t);
    if (result) {
        cout << "\"" << s << "\" is a subsequence of \"" << t << "\"." << endl;
    } else {
        cout << "\"" << s << "\" is not a subsequence of \"" << t << "\"." << endl;
    }
    return 0;
}


