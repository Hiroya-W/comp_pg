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

void solve(long long N, long long M, long long Q, std::vector<long long> a,
           std::vector<long long> b, std::vector<long long> c,
           std::vector<long long> d) {}

int main() {
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    long long Q;
    scanf("%lld", &Q);
    std::vector<long long> a(Q);
    std::vector<long long> b(Q);
    std::vector<long long> c(Q);
    std::vector<long long> d(Q);
    for (int i = 0; i < Q; i++) {
        scanf("%lld", &a[i]);
        scanf("%lld", &b[i]);
        scanf("%lld", &c[i]);
        scanf("%lld", &d[i]);
    }
    solve(N, M, Q, std::move(a), std::move(b), std::move(c), std::move(d));
    return 0;
}
