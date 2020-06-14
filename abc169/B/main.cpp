#include <bits/stdc++.h>

#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

#define EPS (1e-7)
#define INF (1e18)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

typedef unsigned long long ll;

int main() {
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];
    rep(i, N) {
        if (A[i] == 0) {
            cout << "0" << endl;
            return 0;
        }
    }
    ll ans = 1;
    rep(i, N) {
        if (A[i] >= ((ll)INF + 1) / ans + 1) {
            cout << "-1" << endl;
            return 0;
        }
        ans *= A[i];
        if (ans >= (ll)(INF) + 1) {
            cout << "-1" << endl;
            return 0;
        }
    }
    cout << ans << endl;
}
