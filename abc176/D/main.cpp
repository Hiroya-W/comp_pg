#include <bits/stdc++.h>

#include <algorithm>
#include <cstdio>
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

typedef long long ll;
typedef pair<int, int> P;

vector<vector<char>> maze;
vector<vector<int>> ans;
int H, W;
int Ch, Cw;
int Dh, Dw;
int cnt = 0;
queue<P> que_nuri;
queue<P> que;

void dfs(int h, int w) {
    maze[h][w] = '#';
    int dw[] = {-1, 1, 0, 0};
    int dh[] = {0, 0, 1, -1};
    for (int i = 0; i < 4; i++) {
        int nw = w + dw[i];
        int nh = h + dh[i];
        if (0 <= nw && nw < W && 0 <= nh && nh < H && maze[nh][nw] == '.') {
            cout << nh << " " << nw << " " << cnt << endl;
            ans[nh][nw] = min(cnt, ans[nh][nw]);
            que_nuri.push(P(nh, nw));
            dfs(nh, nw);
        }
    }
}

// たどり着けなかったらINF回
int bfs() {
    que.push(P(Ch, Cw));
    ans[Ch][Cw] = 0;

    while (!que.empty()) {
        P p = que.front();
        que.pop();
        que_nuri.push(p);
        ans[p.first][p.second] = min(ans[p.first][p.second], cnt);
        cout << "ans" << p.first << " " << p.second << " " << ans[p.first][p.second] << endl;
        // 歩けるだけ歩く
        dfs(p.first, p.second);
        // 塗りつぶしたやつの5x5の範囲を見ていく
        cnt++;
        while (!que_nuri.empty()) {
            P q = que_nuri.front();
            que_nuri.pop();
            for (int dh = -2; dh <= 2; dh++) {
                for (int dw = -2; dw <= 2; dw++) {
                    int nh = q.first + dh;
                    int nw = q.second + dw;
                    if (0 <= nw && nw < W && 0 <= nh && nh < H && maze[nh][nw] == '.') {
                        // if (nh == Dh && nw == Dw) {
                        //     return cnt + 1;
                        // }
                        que.push(P(nh, nw));
                    }
                }
            }
        }
    }
    return ans[Dh][Dw];
}

int main() {
    cin >> H >> W;
    cin >> Ch >> Cw;
    cin >> Dh >> Dw;
    Ch--;
    Cw--;
    Dh--;
    Dw--;
    maze = vector<vector<char>>(H + 5, vector<char>(W + 5));
    ans = vector<vector<int>>(H + 5, vector<int>(W + 5));
    rep(i, H + 5) {
        rep(j, W + 5) {
            maze[i][j] = '#';
            ans[i][j] = INF;
        }
    }
    rep(i, H) {
        rep(j, W) {
            cin >> maze[i][j];
        }
    }
    int res = bfs();
    if (res == INF) {
        cout << "-1" << endl;
    } else {
        cout << res << endl;
    }
    return 0;
}
