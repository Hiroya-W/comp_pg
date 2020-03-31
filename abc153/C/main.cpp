#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, long long K, std::vector<long long> H)
{
    long long ans = 0;
    sort(H.begin(), H.end());
    for (int i = 0; i < N - K; i++)
    {
        ans += H[i];
    }
    cout << ans << endl;
}

int main()
{
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    std::vector<long long> H(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &H[i]);
    }
    solve(N, K, std::move(H));
    return 0;
}
