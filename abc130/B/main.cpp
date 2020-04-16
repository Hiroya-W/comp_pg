#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, long long X, std::vector<long long> L) {
    ll p = 0;
    ll cnt = 0;
    for (auto i : L) {
        p += i;
        if (p > X) {
            break;
        } else {
            cnt++;
        }
    }
    cout << cnt + 1 << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    long long X;
    scanf("%lld", &X);
    std::vector<long long> L(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &L[i]);
    }
    solve(N, X, std::move(L));
    return 0;
}
