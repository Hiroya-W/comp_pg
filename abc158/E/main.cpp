#include <bits/stdc++.h>

#include <algorithm>
#include <map>
#include <string>
#include <vector>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

void solve(long long N, long long P, string S) {
    map<ll, ll> cnt;
    reverse(S.begin(), S.end());
    ll ans = 0;
    if (P == 2 || P == 5) {
        rep(i, S.size()) {
            if ((S[i] - '0') % P == 0) {
                ans += N - i;
            }
        }
        cout << ans << endl;
        return;
    }
    // vector<ll> A(N + 1);
    // vector<ll> D(N + 1);
    // rep(i, N) { A[i] = ll(ll(S[i] - '0') * pow(10, i)) % P; }
    // D[0] = A[0];
    // cnt[D[0]]++;
    // for (int i = 1; i < N + 1; i++) {
    //     D[i] = (D[i - 1] + A[i]) % P;
    //     // cnt[D[i]]++;
    // }
    // // for (auto i : cnt) {
    // //     ll c = i.second;
    // //     ans += c * (c - 1) / 2;
    // // }
    // rep(i, N + 1) {
    //     ans += cnt[D[i]];
    //     cnt[D[i]]++;
    // }
    vector<int> d(N + 1);
    int count = 1;
    for (int i = N - 1; 0 <= i; i--) {
        int a = (S[i] - '0') * count % P;
        d[i] = (d[i + 1] + a) % P;
        count *= 10;
        count %= P;
    }

    vector<int> sum(P);
    for (int i = N; 0 <= i; i--) {
        ans += sum[d[i]];
        sum[d[i]]++;
    }
    cout << ans << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    long long P;
    scanf("%lld", &P);

    string S;
    cin >> S;
    solve(N, P, S);
    return 0;
}
