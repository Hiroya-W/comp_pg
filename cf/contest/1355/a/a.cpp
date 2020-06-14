#include <bits/stdc++.h>

#include <cstdlib>
#include <string>
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

int main() {
    int t;
    cin >> t;
    rep(i, t) {
        bool ok = false;
        string a;
        ll k;
        cin >> a >> k;
        for (ll j = 0; j < k - 1; j++) {
            int mind = 1e9, maxd = 0;
            rep(m, a.size()) {
                mind = min(mind, a[m] - '0');
                maxd = max(maxd, a[m] - '0');
                if (a[m] == '0') {
                    ok = true;
                }
            }
            a = to_string(stoll(a) + mind * maxd);
            if (ok) {
                break;
            }
        }
        cout << a << endl;
    }
    return 0;
}
