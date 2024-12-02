// 11. Container With Most Water

#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height)
{
    int result = 0;
    int l = 0;
    int r = height.size() - 1;

    while (l < r)
    {
        int area = (r - l) * min(height[l], height[r]);
        result = max(result, area);

        if (height[l] < height[r])
        {
            l++;
        }
        else if (height[l] > height[r])
        {
            r--;
        }
        else
        { // if l == r then just decrease(r--) or increase(l++) one of them. so we do
            r--;
        }
    }

    return result;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height) << endl;

    return 0;
}