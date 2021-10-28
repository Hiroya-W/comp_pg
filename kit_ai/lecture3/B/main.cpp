#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

using Graph = vector<vector<int>>;

vector<int> d;
vector<int> f;
vector<bool> visited;
int cnt = 1;

void dfs(const Graph &g, int v) {
    d[v] = cnt;
    visited[v] = true;
    cnt++;
    for (int u : g[v]) {
        if (visited[u]) continue;
        dfs(g, u);
    }
    f[v] = cnt;
    cnt++;
}

int main() {
    int N;
    cin >> N;
    d.resize(N + 1);
    f.resize(N + 1);
    visited.assign(N + 1, false);

    Graph G(N + 1);
    rep(i, N) {
        int u, k;
        cin >> u >> k;
        rep(j, k) {
            int v;
            cin >> v;
            G[u].push_back(v);
        }
    }
    rep(i, N) {
        if (!visited[i + 1]) {
            dfs(G, i + 1);
        }
    }

    rep(i, N) {
        printf("%d %d %d\n", i + 1, d[i + 1], f[i + 1]);
    }

    return 0;
}
