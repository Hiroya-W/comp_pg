#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, long long M, std::vector<long long> L,
           std::vector<long long> R) {}

int main() {
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    std::vector<long long> L(M);
    std::vector<long long> R(M);
    for (int i = 0; i < M; i++) {
        scanf("%lld", &L[i]);
        scanf("%lld", &R[i]);
    }
    solve(N, M, std::move(L), std::move(R));
    return 0;
}
