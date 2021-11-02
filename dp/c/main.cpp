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

ll dp[100001][3];
ll A[100001][3];

int main() {
    int N;
    cin >> N;
    rep(i, N) {
        rep(j, 3) {
            cin >> A[i][j];
        }
    }

    rep(i, N) {
        rep(j, 3) {
            dp[i][j] = 0;
        }
    }

    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;

    rep(i, N) {
        rep(j, 3) {
            rep(k, 3) {
                if (j == k) continue;
                chmax(dp[i + 1][k], dp[i][j] + A[i][k]);
            }
        }
    }

    ll ans = 0;
    rep(i, 3) {
        chmax(ans, dp[N][i]);
    }
    cout << ans << endl;

    return 0;
}
