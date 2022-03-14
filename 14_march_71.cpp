class Solution {
public:
    string simplifyPath(string path) {
        string ans;
    stack<string> st;
    int n = path.size();
    for(int i = 0; i < n; i++)
    {
        if(path[i] == '/')
            continue;
     
        string tmp;
        while(i < n && path[i] != '/')
            tmp += path[i++];
        
        if(tmp == ".")
            continue;
        else if(tmp == "..")
        {
            if(!st.empty())
                st.pop();
        }
        else
            st.push(tmp);
    }
    
    if(st.empty())
        return "/";
        
    while(!st.empty())
        ans = '/' + st.top() + ans, st.pop();
    
    return ans;
}
    
};
