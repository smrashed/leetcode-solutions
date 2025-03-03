//naive approach
//time complexity O(n*m)

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int l1 = haystack.size();
        int l2 = needle.size();

        for (int i = 0; i < l1;)
        {
            if (haystack[i] == needle[0])
            {
                int j;
                int pos = i;
                for (j = 0; j < l2 && i < l1; j++)
                {
                    if (haystack[i] != needle[j])
                    {
                        break;
                    }
                    i++;
                }
                if (j == l2)
                {
                    return pos;
                }
                i = pos + 1;
            }
            else
                i++;
        }
        return -1;
    }
};