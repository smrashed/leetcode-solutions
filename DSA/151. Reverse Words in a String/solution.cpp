class Solution
{
public
    String reverseWords(String s)
    {
        s = s.trim();
        List<String> list = new ArrayList<>();
        for (int i = 0; i < s.length();)
        {
            if (s.charAt(i) != ' ')
            {
                String temp = "";
                while (i < s.length() && s.charAt(i) != ' ')
                {
                    temp += s.charAt(i);
                    i++;
                }
                list.add(temp);
            }
            else
            {
                i++;
            }
        }

        String finalStr = "";
        for (int i = list.size() - 1; i >= 0; i--)
        {
            if (i != list.size() - 1)
            {
                finalStr += " ";
            }
            finalStr += list.get(i);
        }

        return finalStr;
    }
}