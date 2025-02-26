class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int len = nums.size();
        if (len == 1)
        {
            return;
        }
        int p1 = len - (k % len);
        for (int i = 0, j = p1 - 1; i < j; i++, j--)
        {
            swap(nums[i], nums[j]);
        }
        for (int i = p1, j = len - 1; i < j; i++, j--)
        {
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin(), nums.end());
    }
};