class Solution
{
    public:
        int minimumLengthEncoding(vector<string> &words)
        {
            set<string> st1(words.begin(), words.end());
            set<string> st2(words.begin(), words.end());
            for (auto i: st1)
            {
                for (int j = 1; j < i.size(); j++)
                {
                   	// if(i.substr(j))
                    st2.erase(i.substr(j));
                }
            }
            int ans = 0;
            for (auto i: st2)
            {
                ans += i.size()+1;
            }
            return ans;
        }
};
