// 12. Integer to Roman

#include <bits/stdc++.h>
using namespace std;

string intToRoman(int num)
{
    vector<pair<string, int>> symList = {
        {"I", 1}, {"IV", 4}, {"V", 5}, {"IX", 9}, {"X", 10}, {"XL", 40}, {"L", 50}, {"XC", 90}, {"C", 100}, {"CD", 400}, {"D", 500}, {"CM", 900}, {"M", 1000}};

    string result = "";

    for (int i = symList.size() - 1; i >= 0; i--)
    {
        while (num >= symList[i].second)
        {
            result += symList[i].first;
            num -= symList[i].second;
        }
    }
    return result;
}

int main()
{
    int n;
    cin >> n;

    cout << intToRoman(n) << endl;

    return 0;
}