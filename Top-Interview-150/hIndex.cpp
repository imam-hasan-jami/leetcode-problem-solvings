// 274. H-Index

#include<bits/stdc++.h>
using namespace std;

int hIndex(vector<int> &citations)
{
    sort(citations.begin(), citations.end());

    int h = citations.size();

    for (int i = 0; i < citations.size(); i++)
    {
        if (citations[i] >= h)
        {
            return h;
        }
        else
        {
            if (h == 1 && citations[i] != 0)
            {
                return 1;
            }
            h--;
        }
    }
    return h;
}

int main()
{
    vector<int> citations = {3, 0, 6, 1, 5};
    cout << hIndex(citations) << endl;
    return 0;
}