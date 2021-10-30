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

int h[100000 + 10];
int dp[100000 + 10];

int main() {
    int N, K;
    cin >> N >> K;
    rep(i, N) cin >> h[i];

    fill(dp, dp + 100000 + 10, INF);
    dp[0] = 0;

    rep1(i, N + 1) {
        rep(j, K + 1) {
            if (i - j >= 0) chmin(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
        }
    }
    cout << dp[N - 1] << endl;
    return 0;
}
