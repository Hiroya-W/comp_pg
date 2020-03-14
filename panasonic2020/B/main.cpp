#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void solve(long long H, long long W)
{
    if (H == 1 || W == 1)
    {
        cout << "1" << endl;
    }
    else
    {
        if (H % 2 == 0 && W % 2 == 0)
        {
            cout << H * W / 2 << endl;
        }
        if (W % 2 == 1 && H % 2 == 0)
        {
            cout << W * (H / 2) << endl;
        }
        if (W % 2 == 0 && H % 2 == 1)
        {
            long long num = W * (H / 2) + W / 2;
            cout << num << endl;
        }
        if (W % 2 == 1 && H % 2 == 1)
        {
            int num = W * (H / 2) + W / 2 + 1;
            cout << num << endl;
        }
    }
}

int main()
{
    long long H;
    scanf("%lld", &H);
    long long W;
    scanf("%lld", &W);
    solve(H, W);
    return 0;
}
