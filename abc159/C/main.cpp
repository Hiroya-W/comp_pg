#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long L)
{
    double len = L / 3;
    printf("%8.12lf\n", L * L * L / 27.0);
}

int main()
{
    long long L;
    scanf("%lld", &L);
    solve(L);
    return 0;
}
