//kadanes algorithm

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int len = nums.size();
        int ans = INT_MIN;
        int sum = 0;
        for (int i = 0; i < len; i++)
        {
            sum += nums[i];

            if (sum > ans)
            {
                ans = sum;
            }
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return ans;
    }
};