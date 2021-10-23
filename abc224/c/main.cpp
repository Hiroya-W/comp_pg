#include <bits/stdc++.h>
using namespace std;

#define EPS             (1e-8)
#define INF             (1e9)
#define PI              (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n)  for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

typedef long long ll;

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) {
    if (rest == 0) {
        f(indexes);
    } else {
        if (s < 0) return;
        recursive_comb(indexes, s - 1, rest, f);
        indexes[rest - 1] = s;
        recursive_comb(indexes, s - 1, rest - 1, f);
    }
}

// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k, std::function<void(int *)> f) {
    int indexes[k];
    recursive_comb(indexes, n - 1, k, f);
}

ll ans = 0;

int main() {
    int N;
    cin >> N;
    vector<ll> X(N), Y(N);
    rep(i, N) cin >> X[i] >> Y[i];
    foreach_comb(N, 3, [&](int *indexes) {
        ll x1 = X[indexes[0]];
        ll y1 = Y[indexes[0]];
        ll x2 = X[indexes[1]];
        ll y2 = Y[indexes[1]];
        ll x3 = X[indexes[2]];
        ll y3 = Y[indexes[2]];

        // 座標は全て正の範囲に
        ll x_min = min(x1, min(x2, x3));
        ll y_min = min(y1, min(y2, y3));
        if (x_min < 0) {
            x1 += -x_min;
            x2 += -x_min;
            x3 += -x_min;
        }
        if (y_min < 0) {
            y1 += -y_min;
            y2 += -y_min;
            y3 += -y_min;
        }

        ll sum = (x1 * y2 + x2 * y3 + x3 * y1 - x1 * y3 - x2 * y1 - x3 * y2);
        if (sum != 0) {
            ans++;
        }
    });

    cout << ans << endl;

    return 0;
}
