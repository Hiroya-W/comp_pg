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

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<ll>> B(N + 1, vector<ll>(M + 1));
    rep(i, N) rep(j, M) cin >> B[i + 1][j + 1];

    ll expect_i = B[1][1] / 7 + 1;
    ll expect_j = B[1][1] % 7;
    if (expect_j == 0) {
        expect_j = 7;
        expect_i--;
    }

    if (7 - expect_j + 1 < M) {
        cout << "No" << endl;
        return 0;
    }

    rep(i, N) {
        rep(j, M) {
            ll expect_Bij = (expect_i + i - 1) * 7 + (expect_j + j);
            if (B[i + 1][j + 1] != expect_Bij) {
                cout << "No" << endl;
                return 0;
            }
            // cout << expect_Bij << " ";
        }
        // cout << endl;
    }
    cout << "Yes" << endl;

    return 0;
}
