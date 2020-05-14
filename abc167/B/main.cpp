#include <bits/stdc++.h>
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

void solve(long long A, long long B, long long C, long long K) {
    int tot = 0;
    if (A > K) {
        tot += K;
        cout << tot << endl;
        return;
    } else {
        tot += A;
        K -= A;
    }

    if (B > K) {
        cout << tot << endl;
        return;
    } else {
        K -= B;
    }
    tot -= K;
    cout << tot << endl;
    return;
}
int main() {
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    long long C;
    scanf("%lld", &C);
    long long K;
    scanf("%lld", &K);
    solve(A, B, C, K);
    return 0;
}
