class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int len = prices.size();
        int mn, mx, sum, ans;
        mn = mx = prices[0];
        sum = ans = 0;

        if (isSorted(prices))
        {
            return prices[len - 1] - prices[0];
        }

        for (int i = 1; i < len; i++)
        {
            if (prices[i] > mx)
            {
                mx = prices[i];
            }
            else if (prices[i] < mx)
            {
                ans += mx - mn;
                mn = mx = prices[i];
            }
        }
        return ans += mx - mn;
    }

    bool isSorted(vector<int> &prices)
    {
        vector<int> temp = prices;
        sort(temp.begin(), temp.end());
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] != temp[i])
            {
                return false;
            }
        }
        return true;
    }
};