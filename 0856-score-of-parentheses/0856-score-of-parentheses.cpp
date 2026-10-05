class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);

        for (char c : s) {
            if (c == '(') {
                st.push(0);
            } else {
                int current_score = st.top();
                st.pop();

                int points = (current_score == 0) ? 1 : 2 * current_score;

                st.top() += points;
            }
        }

        return st.top();
    }
};