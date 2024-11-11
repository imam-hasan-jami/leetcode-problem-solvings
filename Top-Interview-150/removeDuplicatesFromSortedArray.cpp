//26. Remove Duplicates from Sorted Array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] != nums[i-1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {
    Solution solution;
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i=0; i<n; i++) {
        cin >> nums[i];                 //need to input the numbers in sorted order cause there no sorting code in the above function
    }

    cout << solution.removeDuplicates(nums) << endl;

    return 0;
}