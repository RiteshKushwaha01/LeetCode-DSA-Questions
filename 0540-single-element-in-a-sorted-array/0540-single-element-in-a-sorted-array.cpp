class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        if (n == 1)
            return nums[0];
        for (int i = 0; i < n; i += 2) {
            if (i == 0) {
                if (nums[i + 1] != nums[i])
                    result = nums[i];
            } else if (nums[i - 1] != nums[i] && nums[i + 1] != nums[i])
                result = nums[i];
        }
        return result;
    }
};