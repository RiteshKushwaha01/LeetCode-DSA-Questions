class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        int totalDuration = 0;
        for (int i = 1; i < n; i++) {
            if ((timeSeries[i] - timeSeries[i - 1]) < duration) {
                totalDuration += timeSeries[i] - timeSeries[i - 1];
            } else {
                totalDuration += duration;
            }
        }
        totalDuration += duration;
        return totalDuration;
    }
};