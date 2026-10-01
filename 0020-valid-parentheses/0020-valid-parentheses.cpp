class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {

            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }

            else {
                if (st.empty())
                    return false;

                char ch = st.top();
                st.pop();

                if (c == ')' && ch != '(')
                    return false;

                if (c == '}' && ch != '{')
                    return false;

                if (c == ']' && ch != '[')
                    return false;
            }
        }

        return st.empty();
    }
};