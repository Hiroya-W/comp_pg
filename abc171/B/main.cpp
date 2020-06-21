#include <bits/stdc++.h>

#include <algorithm>
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
    int N, K;
    cin >> N >> K;
    vector<int> p(N);
    rep(i, N) cin >> p[i];
    sort(p.begin(), p.end());
    int ans = 0;
    rep(i, K) {
        ans += p[i];
    }
    cout << ans << endl;
    return 0;
}
