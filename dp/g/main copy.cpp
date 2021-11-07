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

using Graph = vector<vector<int>>;

int dp[100000];

int rec(Graph& g, int v) {
    if (dp[v] != -1) return dp[v];

    int res = 0;
    for (auto nv : g[v]) {
        chmax(res, rec(g, nv) + 1);
    }
    dp[v] = res;
    return dp[v];
}

int main() {
    int N, M;
    cin >> N >> M;

    Graph g(N);

    rep(i, M) {
        int x, y;
        cin >> x >> y;
        g[x - 1].push_back(y - 1);
    }

    rep(i, N) {
        dp[i] = -1;
    }

    int res = 0;
    rep(v, N) {
        chmax(res, rec(g, v));
    }

    cout << res << endl;

    return 0;
}
