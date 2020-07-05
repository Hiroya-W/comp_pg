#include <bits/stdc++.h>

#include <queue>
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

const long long MOD = 1000000007;

int main() {
    int N, K;
    vector<ll> pos;
    vector<ll> neg;
    cin >> N >> K;

    rep(i, N) {
        ll a;
        cin >> a;
        if (a >= 0) {
            pos.push_back(abs(a));
        } else {
            neg.push_back(abs(a));
        }
    }

    ll ans = 0;
    int posi = 0;
    int negi = 0;
    rep(i, K) {
        if (posi < pos.size() && negi < neg.size()) {
            ll posx = pos[posi];
            ll negx = neg[negi];
            // 範囲外でなければ
            if (posi + 1 < pos.size()) {
                posx *= pos[posi + 1];
            }
            if (negi + 1 < neg.size()) {
                negx *= neg[negi + 1];
            }

        } else if (posi == pos.size() && negi < neg.size()) {
        } else if (posi < pos.size() && negi == neg.size()) {
        } else {
        }

        return 0;
    }
