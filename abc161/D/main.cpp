#include <bits/stdc++.h>

#include <vector>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long K) {
    vector<ll> a;
    for (int i = 1; i <= 9; i++) {
        a.push_back(i);
    }

    while (1) {
        if (K <= a.size()) {
            cout << a[K - 1] << endl;
            return;
        }
        K -= a.size();
        vector<ll> old;
        swap(old, a);
        for (ll x : old) {
            for (int i = -1; i <= 1; i++) {
                int d = x % 10 + i;
                if (d < 0 || d > 9) {
                    continue;
                }
                ll nx = x * 10 + d;
                a.push_back(nx);
            }
        }
    }
}

int main() {
    long long K;
    scanf("%lld", &K);
    solve(K);
    return 0;
}
