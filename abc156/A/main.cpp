#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void solve(long long N, long long R)
{
    int diff = 0;
    if (N < 10)
    {
        diff = 100 * (10 - N);
    }
    cout << R + diff << endl;
}

int main()
{
    long long N;
    scanf("%lld", &N);
    long long R;
    scanf("%lld", &R);
    solve(N, R);
    return 0;
}
