class Solution
{
public
    int reverse(int x)
    {
        int f = 1;
        if (x < 0)
        {
            f = -1;
            x *= -1;
        }
        else if (x % 10 == 0)
        {
            f = 0;
            x /= 10;
        }
        long ans = 0;
        while (x > 0)
        {
            int r = x % 10;
            x /= 10;
            ans = (ans * 10) + r;
        }
        if (ans > Integer.MAX_VALUE)
            return 0;
        if (f == -1)
            return (int)ans * (-1);
        return (int)ans;
    }
}