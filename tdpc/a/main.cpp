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

ll dp[101][10000 + 1] = {0};
int point[100];

int main() {
    int N;
    cin >> N;
    rep(i, N) {
        int p;
        cin >> p;
        point[i] = p;
    }

    rep(i, 101) {
        rep(j, 10001) {
            dp[i][j] = -1;
        }
    }

    dp[0][0] = 1;

    rep(i, N) {
        rep(j, 10001) {
            // 解いた時
            if (j - point[i] >= 0 && dp[i][j - point[i]] != -1) {
                dp[i + 1][j] = 1;
            }
            // 解けなかった時
            if (dp[i][j] != -1) {
                dp[i + 1][j] = 1;
            }
        }
    }
    int sum = 0;

    rep(i, 10001) {
        if (dp[N][i] == 1) {
            sum++;
        }
    }

    cout << sum << endl;

    return 0;
}
