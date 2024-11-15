//169. Majority Element

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int result = nums[0];

        for(int i=1; i<nums.size(); i++) {
            if(count == 0) {
                result = nums[i];
            }

            if(result == nums[i]) {
                count++;
            } else {
                count--;
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }
    cout << solution.majorityElement(nums) << endl;
}