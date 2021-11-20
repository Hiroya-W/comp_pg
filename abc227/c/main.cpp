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

template<class T>
inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template<class T>
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return 1;
    }
    return 0;
}

int main() {
    ll N;
    ll ans = 0;
    cin >> N;
    ll maxN = N;
    for (ll i = 1; i <= N; i++) {
        maxN = N / i;
        if (maxN < i) {
            break;
        }
        ans += maxN - i + 1;

        ll maxNN = maxN;
        for (ll j = 2; j <= i; j++) {
            maxNN = maxNN / j;
            if (maxNN < j) {
                break;
            }
            ans += maxNN - i + 1;
        }
    }
    cout << ans << endl;
    return 0;
}
