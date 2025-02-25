class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        int len = ratings.size();
        vector<int> ans(len, 1);
        for (int i = 1; i < len; i++)
        {
            if (ratings[i] > ratings[i - 1])
            {
                ans[i] = ans[i - 1] + 1;
            }
        }

        for (int i = len - 2; i >= 0; i--)
        {
            if (ratings[i] > ratings[i + 1])
            {
                ans[i] = max(ans[i], ans[i + 1] + 1);
            }
        }
        long long sum = 0;
        for (int i = 0; i < len; i++)
            sum += ans[i];
        return sum;
    }
};