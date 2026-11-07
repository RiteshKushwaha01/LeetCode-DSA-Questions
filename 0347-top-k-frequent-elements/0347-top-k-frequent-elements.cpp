class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> mpp;

        for (int num : nums) {
            mpp[num]++;
        }

        vector<pair<int, int>> temp;

        for (auto it : mpp) {
            temp.push_back({it.second, it.first});
        }

        sort(temp.rbegin(), temp.rend());

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(temp[i].second);
        }

        return ans;
    }
};