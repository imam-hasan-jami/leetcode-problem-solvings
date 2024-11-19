// 45. Jump Game II

#include <bits/stdc++.h>
using namespace std;

int jump(vector<int> &nums)
{
    int res = 0, l = 0, r = 0;

    while (r < nums.size() - 1)
    {
        int far = 0;
        for (int i = l; i < r + 1; i++)
        {
            far = max(far, i + nums[i]);
        }
        l = r;
        r = far;
        res++;
    }
    return res;
}

int main()
{
    vector<int> nums = {2, 3, 1, 1, 4};

    cout << jump(nums) << endl;

    return 0;
}