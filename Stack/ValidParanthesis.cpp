// Problem 20

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string s = "({})";
    stack<char> brac;
    for (char h : s)
    {
        if (h == '(' || h == '[' || h == '{')
        {
            brac.push(h);
        }

        else
        {
            if (brac.empty())
            {
                return false;
            }
            else
            {
                if (h == ')' && brac.top() == '(')
                {
                    brac.pop();
                }
                else if (h == ']' && brac.top() == '[')
                {
                    brac.pop();
                }
                else if (h == '}' && brac.top() == '{')
                {
                    brac.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    return brac.empty();
    return 0;
}