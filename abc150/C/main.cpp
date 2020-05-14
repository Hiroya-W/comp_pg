#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, std::vector<long long> P, std::vector<long long> Q)
{
    vector<long long> a(N);
    rep(i, N) a[i] = i + 1;
    map<vector<long long>, int> mp;
    do
    {
        mp[a] = mp.size();
    } while (next_permutation(a.begin(), a.end()));
    int ans = abs(mp[P] - mp[Q]);
    cout << ans << endl;
}

int main()
{
    long long N;
    scanf("%lld", &N);
    std::vector<long long> P(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &P[i]);
    }
    std::vector<long long> Q(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &Q[i]);
    }
    solve(N, std::move(P), std::move(Q));
    return 0;
}
