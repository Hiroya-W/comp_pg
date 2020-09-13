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

const long long MOD = 1000000007;

int main() {
    int N;
    ll ans = 1;
    cin >> N;
    N = N - 2;

    rep(i, N) {
        ans *= 10;
        ans %= MOD;
    }
    ans *= 2;
    ans %= MOD;
    cout << ans << endl;
    return 0;
}
