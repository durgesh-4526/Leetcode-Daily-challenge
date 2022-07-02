class Solution
{
    public:
        int maxArea(int h, int w, vector<int> &horizontalCuts, vector<int> &verticalCuts)
        {
            sort(verticalCuts.begin(), verticalCuts.end());
            sort(horizontalCuts.begin(), horizontalCuts.end());
            long long a1 = horizontalCuts[0];
            long long a2 = verticalCuts[0];
            horizontalCuts.push_back(h);
            verticalCuts.push_back(w);
            for (int i = 1; i < horizontalCuts.size(); i++)
            {
                a1 = max(a1, (long long) horizontalCuts[i] - horizontalCuts[i - 1]);
            }
            for (int i = 1; i < verticalCuts.size(); i++)
            {
                a2 = max(a2, (long long) verticalCuts[i] - verticalCuts[i - 1]);
            }
            return (a1 *a2) % 1000000007;
        }
};
