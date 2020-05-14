#include <bits/stdc++.h>

#include <vector>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long H, long long N, std::vector<long long> A,
           std::vector<long long> B) {
    ll dp[N + 1][H + 1];
    fill(dp[0], dp[N + 1], INF);

    dp[0][0] = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < H + 1; j++) {
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            int nj = min(j + A[i], H);
            dp[i + 1][nj] = min(dp[i + 1][nj], dp[i + 1][j] + B[i]);
        }
    }
    cout << dp[N][H] << endl;
}

int main() {
    long long H;
    scanf("%lld", &H);
    long long N;
    scanf("%lld", &N);
    std::vector<long long> A(N);
    std::vector<long long> B(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
        scanf("%lld", &B[i]);
    }
    solve(H, N, std::move(A), std::move(B));
    return 0;
}
