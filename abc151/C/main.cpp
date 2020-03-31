#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, long long M, std::vector<long long> p,
           std::vector<std::string> S)
{
    int AC[100005] = {};
    int WA[100005] = {};

    rep(i, M)
    {
        if (AC[p[i]] != 0)
        {
            continue;
        }
        else if (S[i] == "AC")
        {
            AC[p[i]]++;
        }
        else if (S[i] == "WA")
        {
            WA[p[i]]++;
        }
    }

    int ans = 0;
    int pena = 0;
    rep(i, 100005)
    {
        ans += AC[i];
        if (AC[i] != 0)
        {
            pena += WA[i];
        }
    }
    cout << ans << " " << pena << endl;
}

int main()
{
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    std::vector<long long> p(M);
    std::vector<std::string> S(M);
    for (int i = 0; i < M; i++)
    {
        scanf("%lld", &p[i]);
        std::cin >> S[i];
    }
    solve(N, M, std::move(p), std::move(S));
    return 0;
}
