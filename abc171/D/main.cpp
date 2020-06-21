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

typedef long long ll;

int main() {
    int N;
    ll ans = 0;
    cin >> N;
    vector<int> A(100005);
    rep(i, N) {
        int tmp;
        cin >> tmp;
        A[tmp]++;
        ans += tmp;
    }
    int Q;
    cin >> Q;
    rep(i, Q) {
        ll B, C;
        cin >> B >> C;
        ll cnt = A[B];
        A[B] = 0;
        ans -= B * cnt;
        ans += C * cnt;
        A[C] += cnt;
        cout << ans << endl;
    }
    return 0;
}
