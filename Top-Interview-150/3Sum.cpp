// 15. 3Sum

#include <iostream>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    int target = 0;
    sort(nums.begin(), nums.end());

    set<vector<int>> str;
    vector<vector<int>> result;

    for (int i = 0; i < nums.size(); i++)
    {
        int l = i + 1;
        int r = nums.size() - 1;

        while (l < r)
        {
            int sum = nums[i] + nums[l] + nums[r];

            if (sum > total)
            {
                r--;
            }
            else if (sum < total)
            {
                l++;
            }
            else
            {
                str.insert({nums[i], nums[l], nums[r]});
                l++;
                r--;
            }
        }
    }

    for (auto x : s)
    {
        result.push_back(x);
    }

    return result;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);

    for (auto x : result)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}