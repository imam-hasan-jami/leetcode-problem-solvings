// 125. Valid Palindrome

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string newS = "";

    for (char c : s)
    {
        if (isalnum(c))
        {
            newS += tolower(c);
        }
    }

    string rev = newS;

    reverse(rev.begin(), rev.end());

    if (newS == rev)
    {
        return true;
    }

    return false;
}

int main()
{
    string s;
    getline(cin, s);

    cout << isPalindrome(s) << endl;

    return 0;
}