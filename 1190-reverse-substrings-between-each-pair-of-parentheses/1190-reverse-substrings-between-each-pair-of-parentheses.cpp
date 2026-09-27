class Solution {
public:
    void reverse(string& str, int start, int end) {
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }
    string reverseParentheses(string s) {
        stack<int> st;
        string res;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == '(') {
                st.push(res.length());
            } else if (ch == ')') {
                int start = st.top();
                st.pop();
                int end = res.length() - 1;
                reverse(res, start, end);
            } else {
                res += ch;
            }
        }

        return res;
    }
};