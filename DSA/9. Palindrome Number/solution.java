class Solution
{
public
    boolean isPalindrome(int x)
    {
        String s = Integer.toString(x);
        return isPali(s, 0, s.length() - 1);
    }
private
    boolean isPali(String s, int b, int e)
    {
        if (b >= e)
            return true;
        return s.charAt(b) == s.charAt(e) ? isPali(s, b + 1, e - 1) : false;
    }
}