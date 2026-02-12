// Find First repeated character in a string
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
class Solution {
  public:
    string firstRepChar(string& s) {
        unordered_map<char, bool> ump;

        for (char& ch: s) {
            if (ump[ch]) {
                string ans;
                ans.push_back(ch);

                return ans;
            }
            ump[ch] = 1;
        }

        return "-1";
    }
};
int main() {
    string s = "abcdeaf";
    Solution solution;
    string result = solution.firstRepChar(s);
    if (result != "-1") {
        cout << "The first repeated character is: " << result << endl;
    } else {
        cout << "No repeated characters found." << endl;
    }
    return 0;
}