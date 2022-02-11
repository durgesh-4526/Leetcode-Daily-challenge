class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> m1;
        for (int i = 0; i < s1.size(); i++)
        {
            m1[s1[i]]++;
        }
        int i = 0;
        int j = 0;
        unordered_map<char, int> m2;
        while (j < s2.size())
        {
            m2[s2[j]]++;
            if (j - i + 1 < s1.size())
            {
                j++;
            }
            else
            {
                if (m1 == m2)
                {
                    return true;
                }
                else
                {
                    if (m2.find(s2[i]) != m2.end())
                    {
                        m2[s2[i]]--;
                        if (m2[s2[i]] == 0)
                        {
                        m2.erase(s2[i]);
                        }
                    }
                }
                    j++;
                    i++;
            }
        }
        return false;
    }
};
