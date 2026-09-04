class Solution {
public:
    string convertToBase7(int num) {

        string result = "";
        bool negative = num < 0;
        num = abs(num);

        if (num == 0)
            return "0";

        while (num > 0) {
            int singleDigit = (num % 7);
            result += to_string(singleDigit);
            num = num / 7;
        }

        reverse(result.begin(), result.end());
        if (negative) {
            result = "-" + result;
        }

        return result;
    }
};