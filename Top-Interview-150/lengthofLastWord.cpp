// 58. Length of Last Word

#include <iostream>
using namespace std;

int lengthOfLastWord(string s)
{
    int length = 0;

    int i = s.length() - 1;
    while (i >= 0 && s[i] == ' ')
    {
        i--;
    }

    for (; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            length++;
        }
        else
        {
            break;
        }
    }
    return length;
}

int main()
{
    string s;
    getline(cin, s);

    cout << lengthOfLastWord(s);

    return 0;
}