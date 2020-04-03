#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, long long K, std::vector<long long> h)
{
    int count = 0;
    rep(i, N)
    {
        if (h[i] >= K)
        {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    std::vector<long long> h(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &h[i]);
    }
    solve(N, K, std::move(h));
    return 0;
}
