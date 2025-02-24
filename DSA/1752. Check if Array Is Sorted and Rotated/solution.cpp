// Author : Rashedul Islam
// Date   : 2025-02-26

/**********************************************************************************
 *
 * Given an array nums, return true if the array was originally sorted in non-decreasing order, 
 * then rotated some number of positions (including zero). Otherwise, return false.There may be duplicates in the original array.

 * Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.
 *
 *
 * time complexity O(n)
 * space complexity O(n)
 **********************************************************************************/

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int len = nums.size();
        int cnt = 0, pos;
        for (int i = 1; i < len; i++)
        {
            if (nums[i] < nums[i - 1])
            {
                pos = i;
                break;
            }
        }
        if (pos == len - 1)
        {
            if (nums[pos] <= nums[0])
                return true;
            return false;
        }
        for (int j = ++pos; j < len; j++)
        {
            if (!(nums[j] >= nums[j - 1] && nums[j] <= nums[0]))
                return false;
        }
        return true;
    }
};