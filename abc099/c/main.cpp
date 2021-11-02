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

ll dp[1000000];

int main() {
    int N;
    cin >> N;

    fill(dp, dp + 1000000, INF);

    dp[0] = 0;
    rep1(i, N + 1) {
        ll money = 1;
        // 1円
        chmin(dp[i], dp[i - money] + 1);
        // 6円, 6^2円, 6^3円, ...
        money = 6;
        rep(j, N) {
            if (i - money >= 0) {
                chmin(dp[i], dp[i - money] + 1);
                money *= 6;
            } else {
                break;
            }
        }
        money = 9;
        rep(j, N) {
            if (i - money >= 0) {
                chmin(dp[i], dp[i - money] + 1);
                money *= 9;
            } else {
                break;
            }
        }
    }

    cout << dp[N] << endl;

    return 0;
}
