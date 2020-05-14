#include <bits/stdc++.h>

#include <cctype>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

typedef long long ll;

void solve(long long N, long long K, std::string S) {
    rep(i, N) {
        if (i + 1 == K) {
            cout << tolower(S[i]);
        } else {
            cout << S[i];
        }
    }
    cout << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    std::string S;
    std::cin >> S;
    solve(N, K, S);
    return 0;
}
