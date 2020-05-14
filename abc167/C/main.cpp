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

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

typedef long long ll;

int main() {
    int n, m, x;
    ll ans = -1;
    cin >> n >> m >> x;

    vector<vector<int>> A(n, vector<int>(m + 1));
    rep(i, n) {
        rep(j, m + 1) {
            cin >> A[i][j];
        }
    }

    for (int bit = 0; bit < (1 << n); bit++) {
        vector<int> tot(m + 1);
        for (int i = 0; i < n; i++) {
            if (bit & (1 << i)) {
                for (int j = 0; j < m + 1; j++) {
                    tot[j] += A[i][j];
                }
            }
        }
        bool ok = true;
        for (int j = 1; j < m + 1; j++) {
            if (tot[j] < x) {
                ok = false;
            }
        }
        if (ok) {
            if (ans == -1) {
                ans = tot[0];
            } else {
                ans = min(ans, (ll)tot[0]);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
