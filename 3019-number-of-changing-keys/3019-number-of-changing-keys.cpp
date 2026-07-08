class Solution {
public:
    int countKeyChanges(string s) {
        int changeKey = 0;
        for (int i = 1; i < s.size(); i++) {
            char ch = tolower(s[i]);
            if (ch != tolower(s[i - 1])) {
                changeKey++;
            }
        }
        return changeKey;
    }
};