class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int minScore = INT_MAX;

        int maxim = INT_MIN;
        for (int i = 0; i < n; i++) {

            // for (int j = 0; j <= i; j++) {
            //     if (nums[j] > maxim) {
            //         maxim = nums[j];
            //     }
            // }
            
            maxim = max(maxim, nums[i]);

            int minim = INT_MAX;
            for (int k = i; k < n; k++) {
                if (nums[k] < minim) {
                    minim = nums[k];
                }
            }
            minScore = min(minScore, (maxim - minim));
            if (minScore <= k)
                return i;
        }
        return -1;
    }
};