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
    int N, M, K;
    cin >> N >> M >> K;
    vector<ll> A(N + 1);
    vector<ll> B(M + 1);

    rep(i, N) {
        ll c;
        cin >> c;
        A[i + 1] = A[i] + c;
    }

    rep(i, M) {
        ll c;
        cin >> c;
        B[i + 1] = B[i] + c;
    }

    ll ans = 0;
    rep(i, N + 1) {
        ll tot = A[i];
        ll diff = K - tot;
        if (diff < 0) {
            continue;
        }
        ll cnt = upper_bound(B.begin(), B.end(), diff) - B.begin() - 1;
        // cout << "i" << i << "cnt" << cnt << endl;
        ans = max(ans, i + cnt);
    }
    cout << ans << endl;
    return 0;
}
