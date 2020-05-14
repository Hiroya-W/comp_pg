#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long H, long long A)
{
    long long ans = 0;
    ans += H / A;
    if (H % A != 0)
    {
        ans += 1;
    }
    cout << ans << endl;
}

int main()
{
    long long H;
    scanf("%lld", &H);
    long long A;
    scanf("%lld", &A);
    solve(H, A);
    return 0;
}
