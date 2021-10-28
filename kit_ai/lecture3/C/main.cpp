#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

using Graph = vector<vector<int>>;

int main() {
    int N;
    cin >> N;
    vector<int> d;
    d.resize(N + 1, -1);

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

    queue<int> q;
    d[1] = 0;
    q.push(1);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : G[u]) {
            if (d[v] != -1) continue;
            d[v] = d[u] + 1;
            q.push(v);
        }
    }

    rep(i, N) {
        printf("%d %d\n", i + 1, d[i + 1]);
    }

    return 0;
}
