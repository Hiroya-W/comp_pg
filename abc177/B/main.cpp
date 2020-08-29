#include <bits/stdc++.h>
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
    int ans = INF;
    string S, T;
    cin >> S >> T;
    for (int i = 0; i < S.size() - T.size() + 1; i++) {
        int cnt = 0;
        for (int j = 0; j < T.size(); j++) {
            if (S[i + j] != T[j]) {
                cnt++;
            }
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}
