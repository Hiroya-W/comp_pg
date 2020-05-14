#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

bool is_prime(long long n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve(long long X)
{
    int i = 0;
    while (!is_prime(X + i))
    {
        i++;
    }
    cout << X + i << endl;
}

int main()
{
    long long X;
    scanf("%lld", &X);
    solve(X);
    return 0;
}
