// 13. Roman to Integer

#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    unordered_map<char, int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    int result = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (roman[s[i]] < roman[s[i + 1]])
        {
            result -= roman[s[i]];
        }
        else
        {
            result += roman[s[i]];
        }
    }
    return result;
}

int main()
{
    string s = "MCMXCIV";

    cout << romanToInt(s);

    return 0;
}