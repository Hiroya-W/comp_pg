#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long a, long long b, long long x)
{
    double S = (double)x / a;
    double rad;
    if (S >= a * b / 2)
    {
        double h = (a * b - S) * 2 / a;
        rad = atan2(h, a);
    }
    else
    {
        double w = S * 2.0 / b;
        rad = atan2(b, w);
    }
    double deg = rad_to_deg(rad);
    printf("%.10f\n", deg);
}

int main()
{
    long long a;
    scanf("%lld", &a);
    long long b;
    scanf("%lld", &b);
    long long x;
    scanf("%lld", &x);
    solve(a, b, x);
    return 0;
}
