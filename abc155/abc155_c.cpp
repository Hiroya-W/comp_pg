#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> dict;

    int n, num_max = 0;
    cin >> n;

    for (string x; n--; dict[x]++)
    {
        cin >> x;
    }

    for (auto i = dict.begin(); i != dict.end(); i++)
    {
        // cout << i->first << i->second << endl;
        if (num_max < i->second)
        {
            num_max = i->second;
        }
    }

    for (auto i = dict.begin(); i != dict.end(); i++)
    {
        if (num_max == i->second)
        {
            cout << i->first << endl;
        }
    }
}
