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

long long MOD = 1000000007;

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

int main() {
    int N, M;
    cin >> N >> M;
    ll dp[100000 + 10];
    bool can_step_in[100000 + 10];
    fill(dp, dp + 100000 + 10, 0);
    fill(can_step_in, can_step_in + 100000 + 10, true);

    rep(i, M) {
        int a;
        cin >> a;
        can_step_in[a] = false;
    }

    dp[0] = 1;

    rep1(i, N + 1) {
        if (!can_step_in[i]) continue;
        if (can_step_in[i - 1]) {
            dp[i] = (dp[i] + dp[i - 1]) % MOD;
        }
        if (i > 1 && can_step_in[i - 2]) {
            dp[i] = (dp[i] + dp[i - 2]) % MOD;
        }
    }

    cout << dp[N] << endl;

    return 0;
}
