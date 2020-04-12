#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N)
{
    ll tot = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 15 == 0 || i % 5 == 0 || i % 3 == 0)
            continue;
        tot += i;
    }
    cout << tot << endl;
}

int main()
{
    long long N;
    scanf("%lld", &N);
    solve(N);
    return 0;
}
