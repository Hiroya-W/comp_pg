#include <bits/stdc++.h>
using namespace std;

#define EPS             (1e-7)
#define INF             (1e9)
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

ll dp[101][100001] = {0};
ll weight[100], value[100];

int main() {
    int N, W;
    cin >> N >> W;
    rep(i, N) {
        int w, v;
        cin >> w >> v;
        weight[i] = w;
        value[i] = v;
    }

    rep(i, N) {
        rep(sum_w, W + 1) {
            // 商品i を選ぶ
            if (sum_w - weight[i] >= 0) {
                chmax(dp[i + 1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
            }
            // 商品i を選ばない
            chmax(dp[i + 1][sum_w], dp[i][sum_w]);
        }
    }
    cout << dp[N][W] << endl;

    return 0;
}
