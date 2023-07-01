// Problem 27 : Remove Element

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {3, 2, 2, 3};
    vector<int> vec(nums.size());

    int val = 3;
    for (int i = 0; i < nums.size(); i++)
    {
        remove_copy(nums.begin(), nums.end(), vec.begin(), val);
    }
    sort(vec.begin(), vec.end());
    int count = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
        if (0 == vec[i])
        {
            count++;
        }
        else {
            break;
        }
    }

    cout << endl << count << endl
         << vec.size() - count;
    return 0;
}