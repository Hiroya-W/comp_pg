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

typedef long long ll;

struct UnionFind {
    vector<int> d;
    UnionFind(int n = 0) : d(n, -1) {}
    int find(int x) {
        if (d[x] < 0) return x;
        return d[x] = find(d[x]);
    }
    bool unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) return false;
        if (d[x] > d[y]) swap(x, y);
        d[x] += d[y];
        d[y] = x;
        return true;
    }
    bool same(int x, int y) { return find(x) == find(y); }
    int size(int x) { return -d[find(x)]; }
};

int main() {
    int N, M;
    cin >> N >> M;
    // vector<set<int>> friends(N);
    UnionFind uf(N);
    rep(i, M) {
        int A, B;
        cin >> A >> B;
        A--;
        B--;
        uf.unite(A, B);
        // friends[A].insert(B);
        // friends[B].insert(A);
    }
    int ans = -1;
    rep(i, N) {
        // ans = max(ans, (int)friends[i].size() + 1);
        ans = max(ans, uf.size(i));
    }
    cout << ans << endl;

    return 0;
}
