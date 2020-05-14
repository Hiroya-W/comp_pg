#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, std::vector<long long> x, std::vector<long long> y)
{
    double S = 0;
    int count = 0;
    vector<int> a(N);
    rep(i, N) { a[i] = i; }

    do
    {
        count++;
        double tmp = 0;
        for (int i = 1; i < N; i++)
        {
            ll x0 = x[a[i - 1]];
            ll y0 = y[a[i - 1]];
            ll x1 = x[a[i]];
            ll y1 = y[a[i]];
            tmp += sqrt(pow((x0 - x1), 2) + pow((y0 - y1), 2));
        }
        S += tmp;
    } while (next_permutation(a.begin(), a.end()));
    printf("%.10lf\n", S / count);
}

int main()
{
    long long N;
    scanf("%lld", &N);
    std::vector<long long> x(N);
    std::vector<long long> y(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &x[i]);
        scanf("%lld", &y[i]);
    }
    solve(N, std::move(x), std::move(y));
    return 0;
}
