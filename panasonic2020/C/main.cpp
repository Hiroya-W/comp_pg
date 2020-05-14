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
    if (c - a - b > 0)
    {
        if (4 * a * b < (c - a - b) * (c - a - b))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
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
