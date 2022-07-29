class Solution
{
    public:
        vector<string> findAndReplacePattern(vector<string> &words, string pattern)
        {
            vector<string> ans;
            for (int i = 0; i < words.size(); i++)
            {
                int flag = 1;
                map<char, char> m1;
                map<char, char> m2;
                for (int j = 0; j < words[i].size(); j++)
                {
                    auto it = m1.find(pattern[j]);
                    auto its = m2.find(words[i][j]);
                    if (it == m1.end())
                    {
                        m1.insert({ pattern[j],
                            words[i][j] });
                    }
                    else
                    {
                        if (it->second != words[i][j])
                        {
                            flag = 0;
                            break;
                        }
                    }
                    if (its == m2.end())
                    {
                        m2.insert({ words[i][j],
                            pattern[j] });
                    }
                    else
                    {
                        if (its->second != pattern[j])
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
                if (flag)
                {
                    ans.push_back(words[i]);
                }
            }
            return ans;
        }
};
