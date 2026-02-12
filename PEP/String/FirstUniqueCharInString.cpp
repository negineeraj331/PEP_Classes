//First Unique Char in a String
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int firstUniqChar(string &s) {
        unordered_map<char, int>ump;
        int sz = s.size();

        for (int i=0; i<sz; ++i) {
            if (ump.find(s[i]) != end(ump)) {
                ump[s[i]] = -1;
            } else {
                ump[s[i]] = i;
            }
        }

        for (int i=0; i<sz; ++i) {
            if (ump[s[i]] != -1) {
                return i;
            }
        }

        return -1;
    }
};
int main() {
    string s = "leetcode";
    Solution solution;
    int result = solution.firstUniqChar(s);
    if (result != -1) {
        cout << "The index of the first unique character is: " << result << endl;
    } else {
        cout << "No unique characters found." << endl;
    }
    return 0;
}
