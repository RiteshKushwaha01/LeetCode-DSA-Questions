class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int largest_val = nums[n-1];
        int result = 0;
        for(int num : nums){
            if(num != largest_val){
                result += (largest_val - num);
            }
        }
        return result;
    }
};