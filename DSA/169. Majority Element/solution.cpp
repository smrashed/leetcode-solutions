class Solution
{
public:
    // boyer-moore-majority-voting-algorithm
    int majorityElement(vector<int> &nums)
    {
        int len = nums.size();
        int candidate, vote = 0, count = 0;
        for (int i = 0; i < len; i++)
        {
            if (vote == 0)
            {
                candidate = nums[i];
                vote++;
            }
            else
            {
                if (nums[i] == candidate)
                    vote++;
                else
                    vote--;
            }
        }

        for (int i = 0; i < len; i++)
        {
            if (nums[i] == candidate)
                count++;
        }
        if (count > (len >> 1))
        {
            return candidate;
        }
        return -1;
    }
};