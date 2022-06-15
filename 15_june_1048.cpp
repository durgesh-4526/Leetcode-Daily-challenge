bool cmp(string &a, string &b)
{
    return a.size() < b.size();
}
class Solution
{
    public:
        int longestStrChain(vector<string> &words)
        {
            unordered_map<string, int> m;
            sort(words.begin(), words.end(), cmp);
            int ans = 0;
            for (auto word: words)
            {
                for (int i = 0; i < word.size(); i++)
                {
                    string temp = word.substr(0, i) + word.substr(i + 1);
                    m[word] = max(m[word], m[temp] + 1);
                }
                ans = max(ans, m[word]);
            }
            return ans;
        }
};
