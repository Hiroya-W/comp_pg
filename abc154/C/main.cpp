#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

const string YES = "YES";
const string NO = "NO";

void solve(long long N, std::vector<long long> A)
{
    set<long long> tmp;
    rep(i, N) { tmp.insert(A[i]); }
    if (tmp.size() == N)
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
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
