// 392. Is Subsequence

#include <iostream>
using namespace std;

bool isSubsequence(string s, string t)
{
    int j = 0;

    for (int i = 0; i < t.size(); i++)
    {
        if (s[j] == t[i])
        {
            j++;
        }
    }

    if (j == s.size())
    {
        return true;
    }

    return false;
}

int main()
{
    string s = "", t = "";
    cin >> s >> t;

    cout << isSubsequence(s, t) << endl;

    return 0;
}