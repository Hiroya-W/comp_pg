#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long A, long long P) {
    P += A * 3;
    cout << P / 2 << endl;
}

int main() {
    long long A;
    scanf("%lld", &A);
    long long P;
    scanf("%lld", &P);
    solve(A, P);
    return 0;
}
