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

int main() {
    int n;
    cin >> n;
    vector<double> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];
    double t = 0;
    rep(i, n) t += a[i] / b[i];
    t /= 2;
    double ans = 0;
    rep(i, n) {
        double nt = a[i] / b[i];
        if (nt > t) {
            ans += b[i] * t;
            break;
        }
        ans += a[i];
        t -= nt;
    }
    printf("%.10f\n", ans);
    return 0;
}
