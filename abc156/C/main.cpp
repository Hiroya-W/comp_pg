#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void solve(long long N, std::vector<long long> X)
{
    int min = INF;
    int point = 1;
    int sum = 0;
    rep(i, 101)
    {
        sum = 0;
        rep(j, N) { sum += (X[j] - point) * (X[j] - point); }
        if (min > sum)
        {
            min = sum;
        }
        point++;
    }
    cout << min << endl;
}

int main()
{
    long long N;
    scanf("%lld", &N);
    std::vector<long long> X(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &X[i]);
    }
    solve(N, std::move(X));
    return 0;
}
