class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans = {{}};

        for (int num : nums) {
            int currentSize = ans.size();
            for (int i = 0; i < currentSize; i++) {
                vector<int> temp = ans[i];
                temp.push_back(num);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};