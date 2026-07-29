class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        sort(piles.begin(), piles.end());
        long MaxCoins = 0;
        for (int i = n - 2; i >= n / 3; i -= 2) {
            MaxCoins += piles[i];
        }
        return MaxCoins;
    }
};