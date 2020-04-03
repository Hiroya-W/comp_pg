#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long K, long long Q, std::vector<long long> A,
           vector<long long> B)
{
    rep(i, N)
    {
        long long ans = K - Q + B[i];
        if (ans <= 0)
            cout << NO << endl;
        else
            cout << YES << endl;
    }
}

int main()
{
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    long long Q;
    scanf("%lld", &Q);
    std::vector<long long> A(Q);
    vector<long long> B(N);
    for (int i = 0; i < Q; i++)
    {
        scanf("%lld", &A[i]);
        B[A[i] - 1]++;
    }
    solve(N, K, Q, std::move(A), move(B));
    return 0;
}
