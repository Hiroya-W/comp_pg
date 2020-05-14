#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

long long karakaru(long long num)
{
    long long count = 0;
    if (num != 1)
    {
        count += karakaru(num / 2);
    }
    else
    {
        return 1;
    }
    return count * 2 + 1;
}

void solve(long long H)
{
    cout << karakaru(H) << endl;
}

int main()
{
    long long H;
    scanf("%lld", &H);
    solve(H);
    return 0;
}
