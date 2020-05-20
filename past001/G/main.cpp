#include <bits/stdc++.h>

#include <algorithm>
#include <cctype>
#include <ios>
#include <set>
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
    int N;
    ll ans = -1e12;
    cin >> N;
    vector<vector<ll>> A(N, vector<ll>(N));
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            cin >> A[i][j];
        }
    }

    // 3^N の3bit全探索
    for (int bit = 0; bit < pow(3, N); bit++) {
        ll tot = 0;
        int tmp = bit;
        vector<int> group(N);
        // 社員pos に対して、グループを決定する
        for (int pos = 0; pos < N; pos++) {
            group[pos] = tmp % 3;
            tmp /= 3;
        }

        for (int i = 0; i < N; i++) {
            for (int j = i; j < N; j++) {
                if (group[i] == group[j]) {
                    tot += A[i][j];
                }
            }
        }
        ans = max(ans, tot);
    }
    cout << ans << endl;
    return 0;
}
