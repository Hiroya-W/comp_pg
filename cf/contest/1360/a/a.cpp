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
        int a, b;
        cin >> a >> b;
        int minab = min(a, b);
        minab = minab * 2;
        int ansab = max(max(a, b), minab);
        int ans = ansab * ansab;
        cout << ans << endl;
    }
    return 0;
}
