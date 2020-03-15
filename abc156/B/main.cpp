#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void solve(long long N, long long K)
{
    int ans = 0;
    while (N >= K)
    {
        N /= K;
        ans++;
    }
    ans++;
    cout << ans << endl;
}

int main()
{
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    solve(N, K);
    return 0;
}
