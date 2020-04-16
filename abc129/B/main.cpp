#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, std::vector<long long> W) {
    ll ans = INF;
    ll l = 0;
    ll r = 0;
    rep(i, N) { r += W[i]; }
    rep(i, N) {
        l += W[i];
        r -= W[i];
        ans = min(ans, abs(l - r));
    }
    cout << ans << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    std::vector<long long> W(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &W[i]);
    }
    solve(N, std::move(W));
    return 0;
}
