class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n = words.size();
        string ans = "";
        for (int i = 0; i < n; i++) {
            string s = words[i];
            int sum = 0;
            for (char c : s) {
                sum += weights[c - 'a'];
            }
            int value = sum % 26;
            char ch = ('z' - value);
            ans += ch;
        }
        return ans;
    }
};