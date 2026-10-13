class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();

        vector<long long> squared_nums(n);
        
        for (int i = 0; i < n; i++) {
            squared_nums[i] = (long long)nums[i] * nums[i];
        }

        sort(squared_nums.begin(), squared_nums.end());

        long long score = 0;
        int minus_slots = n / 2;

        for (int i = 0; i < n; i++) {
            if (i < minus_slots) {
                score -= squared_nums[i];
            } else {
                score += squared_nums[i];
            }
        }

        return score;
    }
};