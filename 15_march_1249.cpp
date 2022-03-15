class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == '('){
                st.push(i);
            }else if(s[i] == ')'){
                if(st.size() > 0){
                    st.pop();
                }else{
                    s[i] = '*';
                }
            }
        }
        while(!st.empty()){
            int a = st.top();
            st.pop();
            s[a] = '*';
        }
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] != '*'){
                ans+= s[i];
            }
        }
        return ans;
    }
};
