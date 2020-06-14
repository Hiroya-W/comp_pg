#include <bits/stdc++.h>

#include <cctype>
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
    ll maxT1;
    ll maxT2;

    int N;
    cin >> N;
    vector<list<ll>> Time(N);
    rep(i, N) {
        int K;
        cin >> K;
        rep(j, K) {
            ll t;
            cin >> t;
            Time[i].push_back(t);
        }
    }

    maxT1 = Time[i] rep1(i, N) {
    }
    int M;
    cin >> M;
    rep(i, M) {
    }
    return 0;
}
