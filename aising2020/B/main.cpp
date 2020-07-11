#include <bits/stdc++.h>

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
    int cnt = 0;
    cin >> N;
    vector<int> A(N + 1);
    rep(i, N) cin >> A[i + 1];

    for (int i = 1; i < N + 1; i++) {
        if (i % 2 == 0) continue;
        if (A[i] % 2 == 1) cnt++;
    }
    cout << cnt << endl;

    return 0;
}
