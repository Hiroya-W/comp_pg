#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, long long K, std::vector<long long> p, vector<double> S)
{
    double ans = 0;
    rep(i, N - K + 1) { ans = max(ans, S[i + K] - S[i]); }
    printf("%lf\n", ans);
}

int main()
{
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    std::vector<long long> p(N);
    vector<double> S(N + 1, 0);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &p[i]);
        S[i + 1] = S[i] + (p[i] + 1) / 2.0;
    }
    solve(N, K, std::move(p), move(S));
    return 0;
}
