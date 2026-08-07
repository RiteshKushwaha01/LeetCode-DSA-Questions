class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int totalWaviness = 0;

        for (int x = num1; x <= num2; x++) {

            //     int n = x;
            //     vector<int> digits;

            //     while (n > 0) {
            //         digits.push_back(n % 10);
            //         n /= 10;
            //     }

            //     reverse(digits.begin(), digits.end());

            string digits = to_string(x);

            for (int i = 1; i + 1 < digits.size(); i++) {
                if ((digits[i] > digits[i - 1] && digits[i] > digits[i + 1]) ||
                    (digits[i] < digits[i - 1] && digits[i] < digits[i + 1])) {
                    totalWaviness++;
                }
            }
        }
        return totalWaviness;
    }
};