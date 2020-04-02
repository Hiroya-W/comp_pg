#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N)
{
    long long a = 0;
    long long b = 0;
    long long ans = 1e18;
    for (long long i = 1; i < (long long)sqrt(N) + 1; i++)
    {
        a = i;
        if (N % a == 0)
        {
            b = N / a;
            ans = min(ans, a + b - 2);
        }
    }
    cout << ans << endl;
}

int main()
{
    long long N;
    scanf("%lld", &N);
    solve(N);
    return 0;
}
