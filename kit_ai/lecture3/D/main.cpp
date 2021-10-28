#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

using Graph = vector<vector<int>>;

vector<int> group;
int num = 1;

void dfs(const Graph &g, int v) {
    group[v] = num;
    for (int u : g[v]) {
        if (group[u] == -1) {
            dfs(g, u);
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    group.assign(N, -1);

    Graph G(N);
    rep(i, M) {
        int s, t;
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    rep(i, N) {
        if (group[i] == -1) {
            dfs(G, i);
        }
        num++;
    }

    int q;
    cin >> q;
    rep(i, q) {
        int s, t;
        cin >> s >> t;
        if (group[s] == group[t]) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
