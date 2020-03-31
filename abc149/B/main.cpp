#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long A, long long B, long long K)
{
    if (A - K < 0)
    {
        K = K - A;
        if (B - K < 0)
        {
            cout << "0 0" << endl;
        }
        else
        {
            cout << "0 " << B - K << endl;
        }
    }
    else
    {
        cout << A - K << " " << B << endl;
    }
}

int main()
{
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    long long K;
    scanf("%lld", &K);
    solve(A, B, K);
    return 0;
}
