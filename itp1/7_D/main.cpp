#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, m, l;
    cin >> n >> m >> l;

    int a[n][m] = {};
    int b[m][l] = {};

    rep(i, n)
    {
        rep(j, m) { cin >> a[i][j]; }
    }

    rep(i, m)
    {
        rep(j, l) { cin >> b[i][j]; }
    }

    rep(i, n)
    {
        rep(j, l)
        {
            long long int ans = 0;
            rep(k, m) { ans += a[i][k] * b[k][j]; }
            printf("%lld%s", ans, j == l - 1 ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}
