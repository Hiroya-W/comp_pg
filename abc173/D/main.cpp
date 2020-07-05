#include <bits/stdc++.h>

#include <algorithm>
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
    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    sort(A.rbegin(), A.rend());

    ll minA = A[1];
    ll tot = A[0];

    int cnt = 0;
    for (int i = 0; i < N - 2; i++) {
        if (i % 2 == 0) {
            cnt++;
            minA = A[cnt];
        }
        tot += minA;
    }
    cout << tot << endl;

    return 0;
}
