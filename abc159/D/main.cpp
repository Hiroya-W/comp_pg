#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(std::vector<long long> A, long long N, long long numbers[],
           long long ans[])
{
    long long tot = 0;
    rep(i, 200005) { tot += ans[i]; }
    // cout << sum << endl;
    for (int i = 0; i < N; i++)
    {
        cout << tot - numbers[A[i]] * (numbers[A[i]] - 1) / 2 +
                  (numbers[A[i]] - 1) * (numbers[A[i]] - 2) / 2
             << endl;
    }
}

int main()
{
    long long N;
    long long numbers[200005] = {};
    long long ans[200005] = {};
    scanf("%lld", &N);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
        numbers[A[i]]++;
        ans[A[i]] = numbers[A[i]] * (numbers[A[i]] - 1) / 2;
    }
    solve(std::move(A), N, numbers, ans);
    return 0;
}
