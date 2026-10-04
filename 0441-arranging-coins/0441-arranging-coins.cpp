class Solution {
public:
    int arrangeCoins(int n) {
        int start = 1;
        int res = 0;
        while (n > 0) {
            n = n - start;
            if (n >= 0) {
                res++;
            }
            start += 1;
        }
        return res;
    }
};