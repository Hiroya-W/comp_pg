#include <bits/stdc++.h>
using namespace std;

#define EPS             (1e-7)
#define INF             (1e9)
#define PI              (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n)  for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

typedef long long ll;

template<class T>
inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template<class T>
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return 1;
    }
    return 0;
}

ll MOD = 1000000007;

ll cnt_table[1000][1000];
ll a[1000][1000];

ll dfs(int i, int j) {
    ll cnt = 1;
    if (cnt_table[i][j] != 0) return cnt_table[i][j];

    rep(k, 4) {
        int ni = i + dx[k];
        int nj = j + dy[k];

        if (ni < 0 || ni >= 1000 || nj < 0 || nj >= 1000) continue;
        if (a[ni][nj] > a[i][j]) {
            cnt += dfs(ni, nj);
            cnt %= MOD;
        }
    }
    cnt_table[i][j] = cnt;
    return cnt_table[i][j];
}

int main() {
    int H, W;
    cin >> H >> W;
    rep(i, H) {
        rep(j, W) {
            int t;
            cin >> t;
            t--;
            a[i][j] = t;
        }
    }

    ll ans = 0;
    rep(i, H) {
        rep(j, W) {
            ans = (ans + dfs(i, j)) % MOD;
        }
    }

    // rep(i, H) {
    //     rep(j, W) {
    //         cout << cnt_table[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << ans << endl;

    return 0;
}
