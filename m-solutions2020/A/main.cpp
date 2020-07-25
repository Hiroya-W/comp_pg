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
    int x;
    int ans = 0;
    int band = 200;
    cin >> x;

    for (int i = 0; i < 8; i++) {
        int l = band * (i + 2);
        int r = l + band;
        if (l <= x && x < r) {
            ans = 8 - i;
            cout << ans << endl;
            return 0;
        }
    }

    return 0;
}
