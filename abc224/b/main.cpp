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
    int H, W;
    cin >> H >> W;
    vector<vector<ll>> a(H, vector<ll>(W));
    rep(i, H) {
        rep(j, W) {
            cin >> a[i][j];
        }
    }

    bool ok = true;
    for (int i1 = 0; i1 < H; i1++) {
        for (int i2 = i1 + 1; i2 < H; i2++) {
            for (int j1 = 0; j1 < W; j1++) {
                for (int j2 = j1 + 1; j2 < W; j2++) {
                    ll left = a[i1][j1] + a[i2][j2];
                    ll right = a[i2][j1] + a[i1][j2];
                    if (left > right) {
                        ok = false;
                    }
                }
            }
        }
    }
    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
