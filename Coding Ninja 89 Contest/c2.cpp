#include <iostream>
using namespace std;

string call(string &s)
{
    int c0 = 0, c1 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            c0++;
        }
        else
        {
            c1++;
        }
    }
    if (c1 == c0)
    {
        return "NORTH";
    }
    else if (c1 > c0)
    {
        c1 = c1 - c0;
        c1 = c1 % 4;
        if (c1 == 0)
        {
            return "NORTH";
        }
        else if (c1 == 1)
        {
            return "WEST";
        }
        else if (c1 == 2)
        {
            return "SOUTH";
        }
        else if (c1 == 3)
        {
            return "EAST";
        }
    }
    else
    {
        c0 = c0 - c1;
        c0 = c0 % 4;
        if (c0 == 0)
        {
            return "NORTH";
        }
        else if (c0 == 1)
        {
            return "EAST";
        }
        else if (c0 == 2)
        {
            return "SOUTH";
        }
        else if (c0 == 3)
        {
            return "WEST";
        }
    }
}
int main()
{
    string s = "00010";
    string s1 = call(s);
    cout << s1;
    return 0;
}