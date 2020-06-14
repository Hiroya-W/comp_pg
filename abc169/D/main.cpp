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

map<ll, ll> prime_factor(ll n) {
    map<ll, ll> res;
    for (ll i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            ++res[i];
            n /= i;
        }
    }
    if (n != 1) res[n] = 1;
    return res;
}

int main() {
    ll N;
    ll ans = 0;
    cin >> N;
    map<ll, ll> prime = prime_factor(N);
    for (auto p : prime) {
        ll max_e = p.second;
        int e = 1;
        int cnt = 0;
        while (max_e >= e) {
            cnt++;
            max_e -= e;
            e++;
        }
        ans += cnt;
    }
    cout << ans << endl;
    return 0;
}
