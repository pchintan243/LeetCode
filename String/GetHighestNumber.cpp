// Problem: 2259

// remove one number to get the highest number

class Solution
{
public:
    string removeDigit(string number, char digit)
    {
        string result = "";
        for (int i = number.size() - 1; i >= 0; i--)
        {
            if (number[i] == digit)
            {
                string temp = number.substr(0, i) + number.substr(i + 1, number.size());
                result = max(result, temp);
            }
        }
        return result;
    }
};