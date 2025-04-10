class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        return search(nums, target);
    }

    int search(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (nums[mid] > target)
            {
                high = mid - 1;
            }
            else if (nums[mid] < target)
            {
                low = low + 1;
            }
            else if (nums[mid] == target)
            {
                return mid;
            }
        }
        return nums[mid] < target ? mid + 1 : mid;
    }
};