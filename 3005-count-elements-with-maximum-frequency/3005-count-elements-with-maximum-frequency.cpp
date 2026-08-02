class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> frequencyMap;
        for (int num : nums) {
            frequencyMap[num]++;
        }
        int maxFrequency = 0;
        int ans = 0;

        for (const auto& pair : frequencyMap) {
            if (pair.second > maxFrequency) {
                maxFrequency = pair.second;
            }
        }
        for (const auto& pair : frequencyMap) {
            if (pair.second == maxFrequency) {
                ans += pair.second;
            }
        }
        return ans;
    }
};