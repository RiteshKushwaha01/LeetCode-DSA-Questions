class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower,
                                               int upper) {

        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        long long next = lower;

        for (int x : nums) {

            if (x < next)
                continue;

            if (x > upper)
                break;

            if (x > next) {
                result.push_back({(int)next, x - 1});
            }

            next = (long long)x + 1;
        }

        if (next <= upper) {
            result.push_back({(int)next, upper});
        }

        return result;
    }
};