#include <bits/stdc++.h>

#include <algorithm>
#include <cctype>
#include <ios>
#include <set>
#include <vector>
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
    ll tot = 0;
    int N;
    ll allmin = 1e12, oddmin = 1e12;
    cin >> N;
    vector<ll> C(N + 1);
    rep1(i, N + 1) {
        cin >> C[i];
        allmin = min(allmin, C[i]);
        if (i % 2 == 1) {
            oddmin = min(oddmin, C[i]);
        }
    }

    vector<ll> buy(N + 1);
    ll allbuy = 0;
    ll oddbuy = 0;
    int Q;
    cin >> Q;
    rep(i, Q) {
        int type;
        cin >> type;
        if (type == 1) {
            ll x, a;
            cin >> x >> a;
            if (x % 2 == 1 && C[x] >= a + allbuy + oddbuy + buy[x]) {
                tot += a;
                buy[x] += a;
                oddmin = min(C[x] - (allbuy + oddbuy + buy[x]), oddmin);
                allmin = min(oddmin, allmin);
            } else if (x % 2 == 0 && C[x] >= a + allbuy + buy[x]) {
                tot += a;
                buy[x] += a;
                allmin = min(C[x] - (allbuy + buy[x]), allmin);
            }
        } else if (type == 2) {
            ll a;
            cin >> a;
            if (oddmin >= a) {
                tot += a * ((N + 1) / 2);
                oddmin -= a;
                allmin = min(allmin, oddmin);
                oddbuy += a;
            }
        } else {
            ll a;
            cin >> a;
            if (allmin >= a) {
                tot += a * N;
                allmin -= a;
                oddmin -= a;
                allbuy += a;
            }
        }
    }

    cout << tot << endl;
    return 0;
}
