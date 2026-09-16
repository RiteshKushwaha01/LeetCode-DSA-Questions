class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();

        int highestIndP = 0;
        int highestIndM = 0;
        int highestIndG = 0;

        int total_time = 0;

        for (int i = 0; i < n; i++) {

            total_time += garbage[i].length();

            for (char c : garbage[i]) {
                if (c == 'P')
                    highestIndP = i;
                else if (c == 'M')
                    highestIndM = i;
                else if (c == 'G')
                    highestIndG = i;
            }
        }

        for (int i = 0; i < highestIndP; i++) {
            total_time += travel[i];
        }

        for (int i = 0; i < highestIndM; i++) {
            total_time += travel[i];
        }

        for (int i = 0; i < highestIndG; i++) {
            total_time += travel[i];
        }

        return total_time;
    }
};