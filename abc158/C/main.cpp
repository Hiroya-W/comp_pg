#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void solve(long long A, long long B)
{
    int cnt = 0;
    int ansA = 0;
    int ansB = 0;
    while (1)
    {
        ansA = floor(cnt * 0.08);
        ansB = floor(cnt * 0.1);
        if (ansA > 100 || ansB > 100)
        {
            cout << "-1" << endl;
            break;
        }
        if (ansA == A && ansB == B)
        {
            cout << cnt << endl;
            break;
        }
        cnt++;
    }
}

int main()
{
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    solve(A, B);
    return 0;
}
