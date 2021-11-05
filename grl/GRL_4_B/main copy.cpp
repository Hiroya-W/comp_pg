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

vector<int> topo_sort(const Graph& g) {
    vector<int> ans;
    // 入次数を数える
    int n = (int)g.size();
    vector<int> in(n, 0);
    rep(i, n) {
        for (auto e : g[i]) {
            in[e.to]++;
        }
    }

    // 入次数が0のノードを取り出す
    queue<int> q;
    rep(i, n) {
        if (in[i] == 0) {
            q.push(i);
        }
    }

    // 入次数が0のノードを取り出して、そのノードから出ていくエッジを削除していく
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        ans.push_back(v);
        for (auto e : g[v]) {
            in[e.to]--;
            if (in[e.to] == 0) {
                q.push(e.to);
            }
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
    rep(i, ans.size()) {
        cout << ans[i] << endl;
    }
    return 0;
}
