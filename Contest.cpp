#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    int sum = 0;
    int n = nums.size();

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + pow(nums[i-1], 2);
        }
        else
        {
            continue;
        }
    }
    cout << sum;
    return 0;
}