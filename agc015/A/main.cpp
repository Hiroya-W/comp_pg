#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, long long A, long long B)
{
    if (N == 1)
    {
        if (A == B)
        {
            cout << "1" << endl;
            return;
        }
        else
        {
            cout << "0" << endl;
            return;
        }
    }

    if (A > B)
    {
        cout << "0" << endl;
        return;
    }

    cout << (N - 2) * B - (N - 2) * A + 1 << endl;
}

int main()
{
    long long N;
    scanf("%lld", &N);
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    solve(N, A, B);
    return 0;
}
