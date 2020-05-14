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

void solve(long long N, long long M, long long O, std::vector<long long> A)
{
    int tot = 0;
    rep(i, N)
    {
        double temp = (double)A[i] / O;
        if (temp < 1.0 / 4.0 / M)
        {
            continue;
        }
        tot++;
    }
    if (tot >= M)
    {
        cout << YES << endl;
    }
    else
    {
        cout << NO << endl;
    }
}

int main()
{
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    std::vector<long long> A(N);
    long long O = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
        O += A[i];
    }
    solve(N, M, O, std::move(A));
    return 0;
}
