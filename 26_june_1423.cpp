class Solution
{
    public:
        int maxScore(vector<int> &cardPoints, int k)
        {
            int sum = 0;
            int size = cardPoints.size();
            for (int i = 0; i < k; i++)
            {
                sum += cardPoints[i];
            }

            int maxSum = sum;
            for (int i = k - 1; i >= 0; i--)
            {
                sum -= cardPoints[i];
                sum += cardPoints[size - k + i];
                maxSum = max(sum, maxSum);
            }
            return maxSum;
        }
};
