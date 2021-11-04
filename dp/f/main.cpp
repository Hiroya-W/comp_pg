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

int dp[3001][3001] = {0};

int main() {
    string s, t;
    cin >> s >> t;

    rep(i, s.size()) {
        rep(j, t.size()) {
            if (s[i] == t[j]) {
                chmax(dp[i + 1][j + 1], dp[i][j] + 1);
            } else {
                chmax(dp[i + 1][j + 1], dp[i + 1][j]);
                chmax(dp[i + 1][j + 1], dp[i][j + 1]);
            }
        }
    }

    string ans = "";
    int i = s.size(), j = t.size();
    while (i > 0 && j > 0) {
        if (s[i - 1] == t[j - 1]) {
            ans = s[i - 1] + ans;
            i--;
            j--;
        } else if (dp[i][j] == dp[i - 1][j]) {
            i--;
        } else if (dp[i][j] == dp[i][j - 1]) {
            j--;
        }
    }

    cout << ans << endl;

    return 0;
}
