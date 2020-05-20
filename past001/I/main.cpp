#include <bits/stdc++.h>

#include <algorithm>
#include <cctype>
#include <ios>
#include <set>
#include <vector>
using namespace std;

#define EPS (1e-7)
#define INF (1e18)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

typedef long long ll;

const unsigned int N_MAX = 10;
ll dp[1 << N_MAX];

int main() {
    int N, M;
    cin >> N >> M;
    vector<ll> S(M);
    vector<ll> C(M);
    rep(i, M) {
        string s;
        ll c;
        cin >> s >> c;
        ll tmp = 0;
        rep(j, N) {
            if (s[j] == 'Y') {
                tmp += 1 << (N - j - 1);
            }
        }
        S[i] = tmp;
        C[i] = c;
    }
    fill(dp, dp + (1 << N), INF);
    dp[0] = 0;
    for (int i = 0; i < M; i++) {
        for (ll bits = 0; bits < (1 << N); bits++) {
            dp[bits | S[i]] = min(dp[bits | S[i]], dp[bits] + C[i]);
        }
    }
    if (dp[(1 << N) - 1] == INF) {
        cout << "-1" << endl;
    } else {
        cout << dp[(1 << N) - 1] << endl;
    }

    return 0;
}
