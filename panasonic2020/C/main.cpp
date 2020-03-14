#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const string YES = "Yes";
const string NO = "No";

void solve(long long a, long long b, long long c)
{
    if (abs(a - c) > abs(b - c))
    {
        // a < b -c
        long long temp = a;
        a = b;
        b = temp;
    }

    double d = sqrt(a);
    double e = sqrt(b);
    double f = sqrt(c);
    double ef;
    if (abs(e) < abs(f))
    {
        ef = f - e;
    }
    else
    {
        ef = -e + f;
    }

    if (d < ef)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    long long a;
    scanf("%lld", &a);
    long long b;
    scanf("%lld", &b);
    long long c;
    scanf("%lld", &c);
    solve(a, b, c);
    return 0;
}
