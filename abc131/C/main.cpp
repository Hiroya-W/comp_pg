#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9) #define PI(acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

ll gcd(ll a, ll b) {
    if (a % b == 0) {
        return (b);
    } else {
        return (gcd(b, a % b));
    }
}

ll lcm(ll a, ll b) { return a * b / gcd(a, b); }

ll anti(ll X, ll C, ll D) { return X - X / C - X / D + X / lcm(C, D); }

void solve(long long A, long long B, long long C, long long D) {
    cout << anti(B, C, D) - anti(A - 1, C, D) << endl;
}

int main() {
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    long long C;
    scanf("%lld", &C);
    long long D;
    scanf("%lld", &D);
    solve(A, B, C, D);
    return 0;
}
