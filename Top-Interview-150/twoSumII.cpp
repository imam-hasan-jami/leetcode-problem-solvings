// 167. Two Sum II - Input Array Is Sorted

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int l = 0;
    int r = numbers.size() - 1;

    while (l < r)
    {
        int sum = numbers[l] + numbers[r];

        if (sum > target)
        {
            r--;
        }
        else if (sum < target)
        {
            l++;
        }
        else
        {
            return {l + 1, r + 1};
        }
    }

    return {-1, -1};
}

int main()
{
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    int target;
    cin >> target;

    cout << twoSum(numbers, target);

    return 0;
}