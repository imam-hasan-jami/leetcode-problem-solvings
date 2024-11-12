//9. Palindrome Number

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string p = s;
        reverse(p.begin(), p.end());
        if(s == p) return true;
        return false;
    }
};

int main() {
    Solution solution;

    int x;
    cin >> x;

    cout << solution.isPalindrome(x) << endl;
}