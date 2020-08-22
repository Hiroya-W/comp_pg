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
    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    ll ans = 0;
    for (int i = 1; i < N; i++) {
        ll f = A[i - 1];
        ll b = A[i];
        ll diff = f - b;
        diff = 0 <= diff ? diff : 0;
        ans += diff;
        A[i] += diff;
    }
    cout << ans << endl;
    return 0;
}
