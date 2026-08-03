class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> seen;
        int count = 0;

        for (size_t i = 0; i < s.length(); i++) {
            if (seen.count(s[i]) == 0) {
                count++;
                seen.insert(s[i]);
            }
        }
        return count;
    }
};