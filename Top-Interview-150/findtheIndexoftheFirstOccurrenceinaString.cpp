// 28. Find the Index of the First Occurrence in a String

#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{
    if (haystack.length() < needle.length())
    {
        return -1;
    }

    for (int i = 0; i < haystack.length(); i++)
    {
        if (haystack[i] == needle[0])
        {
            if (haystack.substr(i, needle.length()) == needle)
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    string haystack, needle;
    cin >> haystack >> needle;

    cout << strStr(haystack, needle) << endl;

    return 0;
}