#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

typedef long long ll;

const int M = 1000005;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<int> cnt(M);
    for (int x : a)
    {
        if (cnt[x] != 0)
        {
            cnt[x] = 2;
            continue;
        }
        for (int i = x; i < M; i += x)
            cnt[i]++;
    }
    int ans = 0;
    for (int x : a)
    {
        if (cnt[x] == 1)
            ans++;
    }
    cout << ans << endl;
    return 0;
}
