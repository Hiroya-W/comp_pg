#include <bits/stdc++.h>
using namespace std;

#define EPS             (1e-7)
#define INF             (1e12)
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

struct Edge {
    int to;
};

using Graph = vector<vector<Edge>>;

void dfs(const Graph& g, int v, vector<bool>& visited, vector<int>& ans) {
    visited[v] = true;
    // 帰りがけで並べる
    for (const Edge& e : g[v]) {
        if (!visited[e.to]) {
            dfs(g, e.to, visited, ans);
        }
    }
    ans.push_back(v);
}
vector<int> topo_sort(const Graph& g) {
    vector<int> ans;
    int n = (int)g.size();
    vector<bool> visited(n, false);
    rep(i, n) {
        if (!visited[i]) {
            dfs(g, i, visited, ans);
        }
    }
    return ans;
}

int main() {
    int V, E;
    cin >> V >> E;
    Graph g(V);
    rep(i, E) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(Edge {b});
    }

    vector<int> ans = topo_sort(g);
    reverse(ans.begin(), ans.end());
    rep(i, ans.size()) {
        cout << ans[i] << endl;
    }
    return 0;
}
