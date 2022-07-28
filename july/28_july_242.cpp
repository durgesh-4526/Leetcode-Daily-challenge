class Solution
{
    public:
        bool isAnagram(string s, string t)
        {
            unordered_map<char, int> m;
            for (auto i: s)
            {
                m[i]++;
            }
            for (auto i: t)
            {
                if (m.find(i) != m.end())
                {
                    m[i]--;
                    if (m[i] == 0) m.erase(i);
                }
                else
                {
                    return false;
                }
            }
            if (m.size() == 0) return true;
            return false;
        }
};
