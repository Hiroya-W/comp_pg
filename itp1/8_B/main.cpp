#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string str;
    cin >> str;
    while (str != "0")
    {
        int ans = 0;
        rep(i, str.length())
        {
            char c = str[i];
            ans += c - '0';
        }
        cout << ans << endl;
        cin >> str;
    }
}
