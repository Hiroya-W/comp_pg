#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string chk;
    cin >> chk;
    string str;
    cin >> str;
    int ans = 0;
    while (str != "END_OF_TEXT")
    {
        rep(i, str.length()) { str[i] = tolower(str[i]); }
        if (str == chk || str == chk + ".")
        {
            ans++;
        }
        cin >> str;
    }
    cout << ans << endl;
}
