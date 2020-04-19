#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

typedef long long ll;

const long long MOD = 1000000007;

void solve(long long N, long long K) {
    ll tot = 0;
    for (int i = N + 1; i >= K; i--) {
        ll a = 0, b = 0;
        for (int j = 0; j < i; j++) {
            a += j;
            b += N - j;
        }
        tot += (b - a + 1) % MOD;
    }
    cout << tot << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    solve(N, K);
    return 0;
}
