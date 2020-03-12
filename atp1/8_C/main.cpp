#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string str;
    int ans[26] = {};
    while (getline(cin, str))
    {
        rep(i, str.length())
        {
            char c = str[i];
            if ('a' <= c && c <= 'z')
            {
                ans[c - 'a']++;
            }
            else if ('A' <= c && c <= 'Z')
            {
                ans[c - 'A']++;
            }
        }
    }
    rep(i, 26) { printf("%c : %d\n", 'a' + i, ans[i]); }
}
