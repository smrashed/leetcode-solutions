class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int mn = prices[0];
        int mx = prices[0];
        int len = prices.size();
        int ans = 0;
        for (int i = 1; i < len; i++)
        {
            if (prices[i] < mn)
            {
                mn = mx = prices[i];
            }
            if (prices[i] > mx)
            {
                mx = prices[i];
                ans = max(ans, mx - mn);
            }
        }
        return ans;
    }
};