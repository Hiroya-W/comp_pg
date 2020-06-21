#include <bits/stdc++.h>

#include <cstdio>
#include <vector>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

typedef long long ll;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    ll ans = 0;
    rep(i, N) {
        cin >> A[i];
        ans = ans ^ A[i];
    }
    rep(i, N) {
        ll temp = ans;
        temp = temp ^ A[i];
        printf("%lld%s", temp, i == N - 1 ? "" : " ");
    }
    cout << endl;
    return 0;
}
