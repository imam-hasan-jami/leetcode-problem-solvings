// 14. Longest Common Prefix

#include<bits/stdc++.h>
using namespace std;\

string longestCommonPrefix(vector<string>& strs) {
    string result = "";

    for(int i=0; i<strs[0].size(); i++) {
        for(auto s:strs) {
            if(s[i] != strs[0][i]) {
                return result;
            }
        }
        result += strs[0][i];
    }

    return result;
}

int main() {
    vector<string> strs = {"flower", "flow", "fly"};

    cout << longestCommonPrefix(strs) << endl;

    return 0;
}