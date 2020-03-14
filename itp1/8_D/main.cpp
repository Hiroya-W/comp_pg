#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string str;
    string chk;
    cin >> str;
    chk = str + str;
    cin >> str;
    bool ans = true;
    rep(i, chk.length() - str.length())
    {
        ans = true;
        rep(j, str.length())
        {
            if (chk[i + j] != str[j])
            {
                ans = false;
            }
        }
        if (ans)
        {
            cout << "Yes" << endl;
            break;
        }
    }
    if (!ans)
    {
        cout << "No" << endl;
    }
}
