#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int info[4][3][10] = {0};
    int n;
    cin >> n;
    rep(i, n)
    {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        b--;
        f--;
        r--;
        info[b][f][r] += v;
    }
    rep(i, 4)
    {
        rep(j, 3)
        {
            rep(k, 10) { printf(" %d", info[i][j][k]); }
            cout << endl;
        }
        printf("%s", i == 4 - 1 ? "" : "####################\n");
    }

    return 0;
}
