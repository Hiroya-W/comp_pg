#include <bits/stdc++.h>
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
        int ans = 0;
        int n, m;
        cin >> n >> m;
        ans += n * (m / 2);
        if (m % 2 == 1) {
            ans += (n + 1) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
