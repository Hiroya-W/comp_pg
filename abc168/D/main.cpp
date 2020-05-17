#include <bits/stdc++.h>

#include <queue>
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

vector<vector<int>> link;
vector<int> ans;
int M;
int N;

void bfs() {
    queue<int> que;
    que.push(1);
    while (que.size()) {
        int q = que.front();
        que.pop();
        for (int i : link[q]) {
            // まだ来たこと無いところだったら
            if (ans[i] == INF) {
                que.push(i);
                ans[i] = q;
            }
        }
    }
    cout << "Yes" << endl;
    for (int i = 2; i < N + 1; i++) {
        cout << ans[i] << endl;
    }
}

int main() {
    cin >> N >> M;
    link = vector<vector<int>>(N + 1);
    ans = vector<int>(N + 1);
    rep(i, N + 1) {
        ans[i] = INF;
    }
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        link[a].push_back(b);
        link[b].push_back(a);
    }
    bfs();
    return 0;
}
