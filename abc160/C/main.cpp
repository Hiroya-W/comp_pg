#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long K, long long N, std::vector<long long> A) {}

int main()
{
    long long K;
    scanf("%lld", &K);
    long long N;
    scanf("%lld", &N);
    std::vector<long long> A(N);
    ll tot = 0;
    ll max_dis = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
        if (i == 0)
        {
            continue;
        }
        else
        {
            tot += A[i] - A[i - 1];
            max_dis = max(max_dis, A[i] - A[i - 1]);
        }
    }
    tot += K - A[N - 1] + A[0];
    max_dis = max(max_dis, K - A[N - 1] + A[0]);
    cout << tot - max_dis << endl;
    return 0;
}
