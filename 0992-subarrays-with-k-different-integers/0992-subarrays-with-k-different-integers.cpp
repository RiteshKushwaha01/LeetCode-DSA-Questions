class Solution {
private:
    int helperFun(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, r = 0, cnt = 0;
        map<int, int> mpp;
        while (r < nums.size()) {
            mpp[nums[r]]++;
            while (mpp.size() > k) {
                mpp[nums[l]]--;
                if (mpp[nums[l]] == 0) {
                    mpp.erase(nums[l]);
                }
                l += 1;
            }
            cnt += (r - l + 1);
            r += 1;
        }
        return cnt;
    }

public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helperFun(nums, k) - helperFun(nums, k - 1);
    }
};