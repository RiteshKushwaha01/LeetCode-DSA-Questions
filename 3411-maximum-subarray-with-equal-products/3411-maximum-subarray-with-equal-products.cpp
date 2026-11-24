class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for (int i = 0; i < n; i++) {
            long long arr_gcd = nums[i];
            long long arr_lcm = nums[i];
            long long product_arr = 1;
            for (int j = i; j < n; j++) {

                if (product_arr > 25200LL / nums[j])
                    break;

                product_arr *= nums[j];
                arr_gcd = gcd(arr_gcd, nums[j]);
                arr_lcm = lcm(arr_lcm, nums[j]);
                
                if (product_arr == arr_gcd * arr_lcm) {
                    res = max(res, j - i + 1);
                }
            }
        }
        return res;
    }
};