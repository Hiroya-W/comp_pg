#include <bits/stdc++.h>

#include <queue>
#include <utility>
using namespace std;

#define MAX_N 100
#define MAX_M 100
const int INF = 1e9;

char maze[MAX_N][MAX_M + 1];  //迷路
int N, M;
int sx, sy;  // スタート地点
int gx, gy;  // ゴール地点

int d[MAX_N][MAX_M];  // 各点までの最短距離

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

// (sx,sy) から(gx,gy)への最短経路
// たどり着けない場合、d[gx][gy]はINFとなる
int bfs() {
    queue<pair<int, int>> que;
    // 全てINFで初期化
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            d[i][j] = INF;
        }
    }
    // スタート地点
    que.push(make_pair(sx, sy));
    // スタート地点は距離0
    d[sx][sy] = 0;

    while (!que.empty()) {
        // キューの先頭を取り出す
        pair<int, int> p = que.front();
        que.pop();
        // 取り出した状態がゴールならやめる
        if (p.first == gx && p.second == gy) break;
        // 4方向をチェック
        for (int i = 0; i < 4; i++) {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            // 移動可能か
            // 既に訪れたことがあるか d[nx][ny] != INFなら訪れたことがある
            if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' &&
                d[nx][ny] == INF) {
                // 移動できるならキューに入れる
                // その点の距離をpからの距離+1で確定する
                que.push(make_pair(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gx][gy];
}

void solve() {
    int res = bfs();
    cout << res << endl;
}
