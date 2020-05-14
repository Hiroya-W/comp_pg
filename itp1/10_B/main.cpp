#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double s = a * b * sin(c / 180 * M_PI) / 2;
    double d = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(c / 180 * M_PI));
    double l = a + b + d;
    double h = b * sin(c / 180 * M_PI);
    printf("%.8lf\n", s);
    printf("%.8lf\n", l);
    printf("%.8lf\n", h);
}
