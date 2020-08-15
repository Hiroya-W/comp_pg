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
    ll ans = -1e18;
    int index = -1;
    ll N, K;
    cin >> N >> K;
    vector<int> P(N + 1);
    vector<ll> C(N + 1);
    rep(i, N) {
        cin >> P[i + 1];
    }
    rep(i, N) {
        cin >> C[i + 1];
    }

    for (int i = 1; i <= N; i++) {
        ll tot = 0;
        int next = P[i];
        vector<bool> visited(N + 1);
        for (ll j = 0; j < N; j++) {
            if (visited[next] == true) {
                break;
            }
            visited[next] = true;
            tot += C[next];
            next = P[next];
            if (ans < tot) {
                ans = tot;
                index = i;
            }
        }
    }
    ll tot = 0;
    int next = P[index];
    for (ll j = 0; j < K; j++) {
        tot += C[next];
        next = P[next];
        if (ans < tot) {
            ans = tot;
        }
    }
    cout << ans << endl;
    return 0;
}
