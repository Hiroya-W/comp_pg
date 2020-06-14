#include <bits/stdc++.h>

#include <cctype>
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

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
    vector<int> color(N);
    vector<vector<int>> edge(N);
    rep(i, M) {
        int n, m;
        cin >> n >> m;
        n--;
        m--;
        edge[n].push_back(m);
        edge[m].push_back(n);
    }
    rep(i, N) {
        cin >> color[i];
    }
    rep(i, Q) {
        int type;
        cin >> type;
        if (type == 1) {
            int x;
            cin >> x;
            x--;
            cout << color[x] << endl;

            for (int p : edge[x]) {
                color[p] = color[x];
            }
        } else {
            int x, y;
            cin >> x >> y;
            x--;
            cout << color[x] << endl;
            color[x] = y;
        }
    }

    return 0;
}
