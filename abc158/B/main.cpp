#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void solve(long long N, long long A, long long B)
{
    long long AB = A + B;
    long long num = N / AB;
    if (N % AB != 0)
    {
        long long mod = N % AB;
        long long pls = A - mod >= 0 ? mod : A;
        cout << num * A + pls << endl;
    }
    else
    {
        cout << num * A << endl;
    }
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
