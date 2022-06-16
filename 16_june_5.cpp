class Solution
{
  public:
    string ans = "";
    void check(int i, int j, string &s, int size)
    {
        string temp = "";
        while (j < size && i >= 0 && s[i] == s[j])
        {
            i--;
            j++;
        }
       	// temp = s.substr(i+1,j);
        if (ans.size() < j - i - 1)
        {
            ans = s.substr(i + 1, j - i - 1);
        }
    }
    string longestPalindrome(string s)
    {
        if (s.size() <= 1) return s;
        for (int i = 0; i < s.size(); i++)
        {
            check(i, i, s, s.size());
            check(i, i + 1, s, s.size());
        }
        return ans;
    }
};
