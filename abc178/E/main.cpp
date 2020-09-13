#include <bits/stdc++.h>

#include <vector>
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
    int N;
    cin >> N;
    vector<ll> x(N);
    vector<ll> y(N);
    rep(i, N) {
        ll a, b;
        cin >> a >> b;
        x[i] = a - b;
        y[i] = a + b;
    }

    ll xmin = 1e10;
    ll xmax = -1e10;
    ll ymin = 1e10;
    ll ymax = -1e10;
    rep(i, N) {
        xmin = min(xmin, x[i]);
        xmax = max(xmax, x[i]);
        ymin = min(ymin, y[i]);
        ymax = max(ymax, y[i]);
    }

    ll xdiff = xmax - xmin;
    ll ydiff = ymax - ymin;

    ll ans = max(xdiff, ydiff);
    cout << ans << endl;

    return 0;
}
