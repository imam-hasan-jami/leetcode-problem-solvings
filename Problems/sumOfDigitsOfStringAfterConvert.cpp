//1945. Sum of Digits of String After Convert

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getCharValue(char s) {
        return s - 'a' + 1;
    }

    string transform(string& s) {
        string ts = "";
        for(int i=0; i<s.size(); i++) {
            ts += to_string(getCharValue(s[i]));
        }
        return ts;
    }
    
    int addAllNumbers(string& s) {
        int sum = 0;
        for(int i=0; i<s.size(); i++) {
            sum += s[i] - '0';
        }
        return sum;
    }
    
    int getLucky(string s, int k) {
        string numString = transform(s);
        int ans = 0;
        while(k > 0) {
            ans = addAllNumbers(numString);
            numString = to_string(ans);
            k--;
        }
        return ans;
    }
};

int main() {
    Solution solution;

    string s;
    int k;
    cin >> s >> k;

    cout << solution.getLucky(s, k) << endl;
}