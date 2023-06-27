// Problem 9

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int rem;
        long int num = 0;
        long int value = x;
        while (x != 0)
        {
            if (x < 0)
                return false;
            rem = x % 10;
            x = x / 10;
            num = num * 10 + rem;
        }
        if (num == value)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};