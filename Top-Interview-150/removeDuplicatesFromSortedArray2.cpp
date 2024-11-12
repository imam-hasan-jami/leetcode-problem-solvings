//80. removeDuplicatesFromSortedArray II

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int k=2;
        
        if(nums.size() <= 2) {
            return nums.size();
        }
        
        for(int i=2; i<nums.size(); i++) {
            if(nums[i] != nums[k-2]) {
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
    for(int i=0; i<nums.size(); i++) {
        cin >> nums[i];
    }
    
    cout << solution.removeDuplicates(nums) << endl;

    // for(int i=0; i<solution.removeDuplicates(nums); i++) {
    //     cout << nums[i] << " ";
    // }

    return 0;
}