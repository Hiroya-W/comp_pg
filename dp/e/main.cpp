#include <bits/stdc++.h>
using namespace std;

#define EPS             (1e-7)
#define INF             (1e12)
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

ll dp[101][1000 * 100 + 1];
ll weigth[100], value[100];

int main() {
    int N, W;
    cin >> N >> W;
    rep(i, N) {
        cin >> weigth[i] >> value[i];
    }

    rep(i, 101) {
        rep(j, 1000 * 100 + 1) {
            dp[i][j] = INF;
        }
    }

    dp[0][0] = 0;

    rep(i, N) {
        rep(j, 1000 * 100 + 1) {
            // iの商品を選ぶ時
            if (j - value[i] >= 0) {
                chmin(dp[i + 1][j], dp[i][j - value[i]] + weigth[i]);
            }
            // iの商品を選ばない時
            chmin(dp[i + 1][j], dp[i][j]);
        }
    }

    ll ans = 0;
    rep(i, 1000 * 100 + 1) {
        if (dp[N][i] <= W) {
            chmax(ans, ll(i));
        }
    }
    cout << ans << endl;
    return 0;
}
