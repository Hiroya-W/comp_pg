#include <bits/stdc++.h>

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
    int N, K;
    cin >> N >> K;
    vector<int> t(N);
    rep(i, N) {
        cin >> t[i];
    }
    int tot = t[0] + t[1];
    for (int i = 2; i < N; i++) {
        tot += t[i];
        if (tot < K) {
            cout << (i + 1) << endl;
            return 0;
        }
        tot -= t[i - 2];
    }

    cout << "-1" << endl;
    return 0;
}
