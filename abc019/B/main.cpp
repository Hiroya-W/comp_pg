#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(std::string s)
{
    char chk = s[0];
    int count = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (chk != s[i])
        {
            cout << chk << count;
            count = 1;
            chk = s[i];
        }
        else
        {
            count++;
        }
        if (i == s.length() - 1)
        {
            cout << chk << count;
        }
    }
    cout << endl;
}

int main()
{
    std::string s;
    std::cin >> s;
    solve(s);
    return 0;
}
