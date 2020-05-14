#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long X)
{
    ll a = X / 500;
    X -= a * 500;
    ll b = X / 5;
    cout << a * 1000 + b * 5 << endl;
}

int main()
{
    long long X;
    scanf("%lld", &X);
    solve(X);
    return 0;
}
