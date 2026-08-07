class Solution {
public:
    int numberOfMatches(int n) {
        int totalMatchPlayed = 0;
        while (n > 1) {
            if (n % 2 == 0) {
                totalMatchPlayed += n / 2;
                n = n / 2;
            } else {
                totalMatchPlayed += n / 2;
                n = n / 2 + 1;
            }
        }
        return totalMatchPlayed;
    }
};