class Solution {
public:
    int minAddToMakeValid(string s) {

        int openingP = 0, closingP = 0;

        for (char c : s) {
            if (c == '(') {
                openingP++;
            } else {
                if (openingP > 0) {
                    openingP--;
                } else {
                    closingP++;
                }
            }
        }
        
        return closingP + openingP;
    }
};