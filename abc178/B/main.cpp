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

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x1 = max(a, b);
    ll x2 = min(a, b);
    ll y1 = max(c, d);
    ll y2 = min(c, d);
    ll ans = max(x1 * y1, x2 * y2);
    ans = max(ans, x1 * y2);
    ans = max(ans, x2 * y1);
    cout << ans << endl;
    return 0;
}
