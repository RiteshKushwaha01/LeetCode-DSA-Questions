class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int low = 0, high = 0;

        for (int weight : weights) {
            low = max(low, weight);
            high += weight;
        }

        int ans = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int requiredDays = 1;
            int currentLoad = 0;

            for (int weight : weights) {

                if (currentLoad + weight <= mid) {
                    currentLoad += weight;
                } else {
                    requiredDays++;
                    currentLoad = weight;
                }
            }

            if (requiredDays <= days) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};