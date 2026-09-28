class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int maxDepth = 0;
        int depth = 0;
        for (char c : s) {
            if (c == '(') {
                st.push(c);
                depth += 1;
            } else if (c == ')') {
                st.pop();
                depth -= 1;
            }
            maxDepth = max(maxDepth, depth);
        }
        return maxDepth;
    }
};