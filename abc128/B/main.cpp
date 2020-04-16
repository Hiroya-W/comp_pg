#include <bits/stdc++.h>

#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(ll N, vector<pair<pair<string, ll>, ll>> A) {
    sort(A.begin(), A.end());
    rep(i, N) { cout << A[i].second << endl; }
}

int main() {
    long long N;
    scanf("%lld", &N);
    vector<pair<pair<string, ll>, ll>> A(N);
    for (int i = 0; i < N; i++) {
        string S;
        ll P;
        cin >> S >> P;
        A[i] = make_pair(make_pair(S, -P), i + 1);
    }
    solve(N, move(A));
    return 0;
}
