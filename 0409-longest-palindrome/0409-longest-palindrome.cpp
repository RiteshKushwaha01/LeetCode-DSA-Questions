class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        map<int, int> mpp;
        int maxLen = 0;
        for (int i = 0; i < n; i++) {
            mpp[s[i]]++;
        }
        for (auto it : mpp) {
            if (mpp.size() == 1 && (it.second % 2) == 0)
                return it.second;
            if (it.second % 2 == 0)
                maxLen += it.second;
            else {
                if (it.second != 1) {
                    maxLen += it.second - 1;
                }
            }
        }
        return maxLen += 1;
    }
};