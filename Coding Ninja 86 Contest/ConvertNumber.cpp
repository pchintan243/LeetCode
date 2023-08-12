string ninjaAndStringConversion(int n, string &s)
{
    // Write your code here.
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            if (s[i] == 65)
            {
                s[i] = 90;
            }
            else
            {
                s[i] -= 1;
            }
        }
        else
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                if (s[i] == 122)
                {
                    s[i] = 97;
                }
                else
                {
                    s[i] += 1;
                }
            }
        }
    }
}