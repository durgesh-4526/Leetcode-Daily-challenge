bool cmp(vector<int> &a, vector<int> &b)
{
    return a[1] > b[1];
}
class Solution
{
    public:

        int maximumUnits(vector<vector < int>> &boxTypes, int truckSize)
        {
            sort(boxTypes.begin(), boxTypes.end(), cmp);
            int ans = 0;
            int i = 0;
            for (int i = 0; i < boxTypes.size(); i++)
            {
                int a = boxTypes[i][0];
                if (a <= truckSize)
                {
                    ans += (a *boxTypes[i][1]);
                    truckSize -= a;
                }
                else
                {
                    ans += (truckSize *boxTypes[i][1]);
                    return ans;
                }
            }
            return ans;
        }
};
