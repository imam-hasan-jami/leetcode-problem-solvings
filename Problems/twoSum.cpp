//1. Two Sum

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size()-1; i++) {
            for(int j=i + 1; j<nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    return {i,j};
                }
            }
        }
        return {};
    }
};

int main() {
    Solution solution;

    int n, target;
    cin >> n >> target;

    vector<int> nums(n);
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }

    vector<int> result = solution.twoSum(nums, target);
    for(int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}