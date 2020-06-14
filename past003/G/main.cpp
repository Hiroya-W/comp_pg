#include <bits/stdc++.h>

#include <cctype>
#include <queue>
#include <utility>
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

int dx[6] = {1, 0, -1, 0, 1, -1};
int dy[6] = {0, 1, 0, -1, 1, 1};

const int N_MAX = 405;
int X, Y;
vector<vector<char>> field;
vector<vector<int>> dist;

int bfs() {
    // pair<y,x>
    queue<pair<int, int>> que;
    // Start地点
    que.push(make_pair(N_MAX / 2, N_MAX / 2));

    // dist[y][x]
    // Start地点
    dist[N_MAX / 2][N_MAX / 2] = 0;

    while (!que.empty()) {
        pair<int, int> p = que.front();
        que.pop();

        // ゴールだったら終了
        if (p.first == Y && p.second == X) {
            break;
        }

        // 移動できるところを見る
        for (int i = 0; i < 6; i++) {
            // 移動先
            int ny = p.first + dy[i];
            int nx = p.second + dx[i];

            // 配列の範囲内か
            // まだ来たことなかったら
            if (0 <= nx && nx < N_MAX && 0 <= ny && ny < N_MAX && field[ny][nx] != '#' && dist[ny][nx] == INF) {
                // cout << i << ", " << ny << "," << nx << endl;
                que.push(make_pair(ny, nx));
                dist[ny][nx] = dist[p.first][p.second] + 1;
            }
        }
    }
    return dist[Y][X];
}

int main() {
    int N;
    cin >> N >> X >> Y;
    X += N_MAX / 2;
    Y += N_MAX / 2;
    field = vector<vector<char>>(N_MAX, vector<char>(N_MAX));
    dist = vector<vector<int>>(N_MAX, vector<int>(N_MAX));
    rep(i, N_MAX) {
        rep(j, N_MAX) {
            field[i][j] = '.';
            dist[i][j] = INF;
        }
    }

    rep(i, N) {
        int x, y;
        cin >> x >> y;
        field[y + N_MAX / 2][x + N_MAX / 2] = '#';
    }

    int ans = bfs();
    if (ans == INF) {
        cout << "-1" << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}
