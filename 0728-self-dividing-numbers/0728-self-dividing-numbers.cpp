class Solution {
public:
    bool checkSDN(int num) {
        int temp = num;
        bool flag = false;
        while (num > 0) {
            int digit = num % 10;
            if (digit == 0)
                return false;
            if (temp % digit == 0)
                flag = true;
            else {
                flag = false;
                break;
            }
            num = num / 10;
        }
        return flag;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for (int i = left; i <= right; i++) {
            if (checkSDN(i)) {
                result.push_back(i);
            }
        }
        return result;
    }
};