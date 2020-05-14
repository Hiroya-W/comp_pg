#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, m;
    cin >> n >> m;
    int mata[n][m] = {0};
    int matb[m] = {0};
    rep(i, n)
    {
        rep(j, m) { cin >> mata[i][j]; }
    }
    rep(i, m) cin >> matb[i];

    rep(i, n)
    {
        int c = 0;
        rep(j, m) { c += mata[i][j] * matb[j]; }
        cout << c << endl;
    }

    return 0;
}
