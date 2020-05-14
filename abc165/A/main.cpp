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

void solve(long long K, long long A, long long B) {
    string ans = "NG";
    for (int i = A; i <= B; i++) {
        if (i % K == 0) {
            ans = "OK";
        }
    }
    cout << ans << endl;
}

int main() {
    long long K;
    scanf("%lld", &K);
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    solve(K, A, B);
    return 0;
}
