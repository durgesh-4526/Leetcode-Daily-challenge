class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int ans = 0;
        int i = 0;
        while (i < s.size())
        {
            if (s[i] == '(')
            {
                st.push(ans);
                ans = 0;
            }
            else
            {
                int a = st.top();
                st.pop();
                ans += a + max(ans, 1);
            }
          i++;
        }
        return ans;
    }
};
