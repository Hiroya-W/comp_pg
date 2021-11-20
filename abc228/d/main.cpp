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

struct UnionFind {
    vector<int> par;
    UnionFind(int N) : par(N) {
        for (int i = 0; i < N; i++)
            par[i] = i;
    }

    int root(int x) {
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) return;
        par[rx] = ry;
    }

    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main() {
    int N = pow(2, 20);
    int Q;
    vector<ll> v(N, -1);
    UnionFind uf(N);
    cin >> Q;

    rep(i, Q) {
        ll t, x;
        cin >> t >> x;
        if (t == 1) {
            int h = x % N;
            int target = uf.root(h);
            // while (true) {
            //     if (v[h] != -1) {
            //         h = (h + 1) % N;
            //     } else {
            //         break;
            //     }
            //     continue;
            // }

            // v[h] = x;
            v[target] = x;
            uf.unite(h, (h + 1) % N);
        } else {
            x = x % N;
            cout << v[x] << endl;
        }
    }

    return 0;
}
