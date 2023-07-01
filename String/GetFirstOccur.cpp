// Problem 28

// return the first occurence of string if needle string is in haystack string

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int m = haystack.size();
        int n = needle.size();

        bool value = true;
        int i, j;
        for (i = 0; i < m - n + 1; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (needle[j] != haystack[j + i])
                {
                    value = false;
                    break;
                }
                else
                {
                    value = true;
                }
            }
            if (n == j && value)
            {
                return i;
            }
        }
        return -1;
    }
};