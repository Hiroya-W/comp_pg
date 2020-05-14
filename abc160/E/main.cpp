#include <bits/stdc++.h>

#include <algorithm>
#include <vector>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long X, long long Y, long long A, long long B, long long C,
           std::vector<long long> p, std::vector<long long> q,
           std::vector<long long> r) {
    sort(p.rbegin(), p.rend());
    sort(q.rbegin(), q.rend());
    vector<int> d;
    rep(i, X) d.push_back(p[i]);
    rep(i, Y) d.push_back(q[i]);
    rep(i, C) d.push_back(r[i]);
    sort(d.rbegin(), d.rend());
    ll ans = 0;
    rep(i, X + Y) { ans += d[i]; }
    cout << ans << endl;
}

int main() {
    long long X;
    scanf("%lld", &X);
    long long Y;
    scanf("%lld", &Y);
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    long long C;
    scanf("%lld", &C);
    std::vector<long long> p(A);
    for (int i = 0; i < A; i++) {
        scanf("%lld", &p[i]);
    }
    std::vector<long long> q(B);
    for (int i = 0; i < B; i++) {
        scanf("%lld", &q[i]);
    }
    std::vector<long long> r(C);
    for (int i = 0; i < C; i++) {
        scanf("%lld", &r[i]);
    }
    solve(X, Y, A, B, C, std::move(p), std::move(q), std::move(r));
    return 0;
}
