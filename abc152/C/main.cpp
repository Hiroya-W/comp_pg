#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, std::vector<long long> P)
{
    long long tmp = INF;
    long long ans = 0;
    rep(i, N)
    {
        tmp = min(tmp, P[i]);
        if (tmp == P[i])
        {
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    long long N;
    scanf("%lld", &N);
    std::vector<long long> P(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &P[i]);
    }
    solve(N, std::move(P));
    return 0;
}
