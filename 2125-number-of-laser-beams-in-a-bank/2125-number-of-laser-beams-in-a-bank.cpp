class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int m = bank[0].size();
        vector<int> laserSum;
        for (int i = 0; i < n; i++) {
            int laser = 0;
            for (int j = 0; j < m; j++) {
                if (bank[i][j] == '1') {
                    laser++;
                }
            }
            laserSum.push_back(laser);
        }
        int result = 0;
        int prev = 0;
        for (int i = 0; i < laserSum.size(); i++) {
            int temp = 1;
            if (laserSum[i] != 0) {
                result += prev * laserSum[i];
                prev = laserSum[i];
            }
        }
        return result;
    }
};