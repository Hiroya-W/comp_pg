#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, long long X, long long Y)
{
    ll ans[2005] = {};
    ll shortcut = Y - X - 1;
    for (int i = 1; i < N; i++)
    {
        for (int j = i + 1; j <= N; j++)
        {
            if (i <= X && Y <= j)
            {
                ans[j - i - shortcut]++;
            }
            else if (i <= X && (X < j && j < Y))
            {
                ll temp = min((long long)j - i, X - i + 1 + Y - j);
                ans[temp]++;
            }
            else if (X < i && Y <= j)
            {
                ll temp = min((long long)j - i, i - X + 1 + j - Y);
                ans[temp]++;
            }
            else if (X < i && j <= Y)
            {
                ll temp = min((long long)j - i, i - X + 1 + Y - j);
                ans[temp]++;
            }
            else
            {
                ans[j - i]++;
            }
        }
    }
    for (int i = 1; i < N; i++)
    {
        cout << ans[i] << endl;
    }
}

int main()
{
    long long N;
    scanf("%lld", &N);
    long long X;
    scanf("%lld", &X);
    long long Y;
    scanf("%lld", &Y);
    solve(N, X, Y);
    return 0;
}
