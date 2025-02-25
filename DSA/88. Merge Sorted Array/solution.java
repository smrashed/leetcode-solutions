class Solution
{
public
    void merge(int[] nums1, int m, int[] nums2, int n)
    {
        ArrayList<Integer> temp = new ArrayList<>();
        int i = 0, j = 0;
        for (; i < m && j < n;)
        {
            if (nums1[i] <= nums2[j])
            {
                temp.add(nums1[i]);
                i++;
            }
            else
            {
                temp.add(nums2[j]);
                j++;
            }
        }
        while (i < m)
        {
            temp.add(nums1[i]);
            i++;
        }
        while (j < n)
        {
            temp.add(nums2[j]);
            j++;
        }
        for (int i1 = 0; i1 < m + n; i1++)
        {
            nums1[i1] = temp.get(i1);
        }
    }
}