#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long P, long long Q, long long R) {
    ll ans = INF;
    ans = min(ans, P + Q);
    ans = min(ans, P + R);
    ans = min(ans, Q + R);
    cout << ans << endl;
}

int main() {
    long long P;
    scanf("%lld", &P);
    long long Q;
    scanf("%lld", &Q);
    long long R;
    scanf("%lld", &R);
    solve(P, Q, R);
    return 0;
}
