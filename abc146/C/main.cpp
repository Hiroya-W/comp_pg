#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

long long d(long long N)
{
    long long count = 0;
    while (N != 0)
    {
        count++;
        N /= 10;
    }
    return count;
}
void solve(long long A, long long B, long long X)
{
    long long left = 0;
    long long right = 1e9 + 1;
    long long mid = (left + right) / 2;
    while (right - left > 1)
    {
        if (A * mid + B * d(mid) <= X)
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
        mid = (left + right) / 2;
    }
    cout << left << endl;
}

int main()
{
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    long long X;
    scanf("%lld", &X);
    solve(A, B, X);
    return 0;
}
