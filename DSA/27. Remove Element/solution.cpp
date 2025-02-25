class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int cnt = 0;
        int len = nums.size();
        vector<int> pos;
        for (int i = 0; i < len; i++)
        {
            if (nums[i] == val)
            {
                cnt++;
            }
            else
            {
                pos.push_back(i);
            }
        }
        
        for (int i = 0, j = 0; i < len - cnt; i++, j++)
        {
            swap(nums[i], nums[pos[j]]);
        }
        
        return len - cnt;
    }
};