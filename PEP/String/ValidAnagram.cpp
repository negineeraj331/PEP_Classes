//validAnagram.cpp
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool isAnagram(string &s, string& t) {
        int szs = s.size();
        int szt = t.size();

        if (szs != szt) {
            return false;
        }

        vector<int>mp(26);

        for (char&ch : s) {
            ++mp[ch-'a'];
        }

        for (auto&ch : t) {
            --mp[ch-'a'];
        }

        for (int&it : mp) {
            if (it != 0) return false;
        }

        return 1;
    }
};
int main() {
    string s = "listen";
    string t = "silent";
    Solution solution;
    bool result = solution.isAnagram(s, t);
    if (result) {
        cout << "\"" << s << "\" and \"" << t << "\" are anagrams." << endl;
    } else {
        cout << "\"" << s << "\" and \"" << t << "\" are not anagrams." << endl;
    }
    return 0;
}