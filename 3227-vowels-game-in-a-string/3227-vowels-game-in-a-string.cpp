class Solution {

public:
    bool isVowel(char x) {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
            x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
            return true;
        } else
            return false;
    }

    bool doesAliceWin(string s) {
        int cnt = 0;
        for (char ch : s) {
            if (isVowel(ch))
                cnt += 1;
        }
        if (cnt == 0) {
            return false;
        } else {
            return true;
        }
    }
};