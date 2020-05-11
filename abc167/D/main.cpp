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

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

typedef long long ll;

const int D = 60;
const int MAX_N = 200005;
int to[D][MAX_N];

int main() {
    int N;
    ll K;
    cin >> N >> K;
    rep(i, N) {
        cin >> to[0][i];
        to[0][i]--;
    }
    rep(i, D - 1) {
        rep(j, N) {
            to[i + 1][j] = to[i][to[i][j]];
        }
    }

    int v = 0;
    for (int i = D - 1; i >= 0; i--) {
        ll l = 1ll << i;
        if (l <= K) {
            v = to[i][v];
            K -= l;
        }
    }
    cout << v + 1 << endl;
    return 0;
}
