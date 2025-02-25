class Solution
{
public
    int removeDuplicates(int[] nums)
    {
        Map<Integer, Integer> unique = new LinkedHashMap<>();
        for (int i = 0; i < nums.length; i++)
        {
            if (!unique.containsKey(nums[i]))
            {
                unique.put(nums[i], 1);
            }
        }
        int j = 0;
        for (Map.Entry<Integer, Integer> mapElement : unique.entrySet())
        {
            int key = mapElement.getKey();
            nums[j++] = key;
        }

        return unique.size();
    }
}