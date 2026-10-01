class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans = "";
        int i = 0;
        int j = 0;
        while (j < n) {
            if (s[j] == ' ') {
                string word = s.substr(i, j - i);
                reverse(word.begin(), word.end());
                ans = ans + word + " ";
                i = j + 1;
            }
            j++;
        }

        string lastWord = s.substr(i, j - i);
        reverse(lastWord.begin(), lastWord.end());
        ans += lastWord;

        return ans;
    }
};