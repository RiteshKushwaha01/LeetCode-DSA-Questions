class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int smallest = nums1[0];

        for (int i = 1; i < n; i++) {
            if (nums1[i] < smallest) {
                smallest = nums1[i];
            }
        }

        if (smallest % 2 != 0)
            return true;

        for (int num : nums1) {
            if (num % 2 != 0)
                return false;
        }

        return true;
    }
};