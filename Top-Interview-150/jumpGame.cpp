// 55. Jump Game

#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums)
{
    int goal = nums.size() - 1;

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (i + nums[i] >= goal)
        {
            goal = i;
        }
    }

    if (goal == 0)
    {
        return true;
    }

    return false;
}

int main()
{
    vector<int> nums = {2, 3, 1, 1, 4};

    cout << canJump(nums);

    return 0;
}