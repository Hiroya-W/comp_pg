#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    double x[n] = {};
    double y[n] = {};
    rep(i, n) { cin >> x[i]; }
    rep(i, n) { cin >> y[i]; }
    double p1 = 0;
    rep(i, n) { p1 += abs(x[i] - y[i]); }
    double p2 = 0;
    double tmp = 0;
    rep(i, n) { tmp += pow(abs(x[i] - y[i]), 2); }
    p2 = sqrt(tmp);
    double p3 = 0;
    tmp = 0;
    rep(i, n) { tmp += pow(abs(x[i] - y[i]), 3); }
    p3 = pow(tmp, 1.0 / 3);

    double p4 = 0;
    rep(i, n)
    {
        double tmp = abs(x[i] - y[i]);
        if (p4 < tmp)
        {
            p4 = tmp;
        }
    }

    printf("%.8lf\n", p1);
    printf("%.8lf\n", p2);
    printf("%.8lf\n", p3);
    printf("%.8lf\n", p4);
}
