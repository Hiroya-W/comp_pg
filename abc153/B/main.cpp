#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

const string YES = "Yes";
const string NO = "No";

void solve(long long H, long long N, std::vector<long long> A, long long S)
{
    if (H - S <= 0)
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
    long long H;
    scanf("%lld", &H);
    long long N;
    scanf("%lld", &N);
    std::vector<long long> A(N);
    long long S = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
        S += A[i];
    }
    solve(H, N, std::move(A), S);
    return 0;
}
