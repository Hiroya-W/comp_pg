#include <bits/stdc++.h>

#include <algorithm>
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

int main() {
    int N;
    ll ans = 0;
    cin >> N;
    vector<ll> L(N);
    rep(i, N) cin >> L[i];

    for (int i = 0; i < N - 2; i++) {
        for (int j = i; j < N - 1; j++) {
            for (int k = j; k < N; k++) {
                ll num[3];
                num[0] = L[i];
                num[1] = L[j];
                num[2] = L[k];
                sort(num, num + 3);
                // 同じ長さを選んだ時
                if (num[0] == num[1] || num[1] == num[2] || num[2] == num[0]) {
                    continue;
                }
                // 三角形が作れない時
                if (num[0] + num[1] <= num[2]) {
                    continue;
                }
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
