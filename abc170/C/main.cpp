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
    int x, n, ans = 0;
    int minabs = INF;
    cin >> x >> n;
    vector<int> A(111);
    if (n == 0) {
        cout << x << endl;
        return 0;
    }

    for (int i = -9; i <= 101; i++) {
        A[i + 9] = i;
    }
    rep(i, n) {
        int a;
        cin >> a;
        A[a + 9] = -1;
    }

    for (int i = -9; i <= 101; i++) {
        if (A[i + 9] == -1) {
            continue;
        }

        int a = abs(A[i + 9] - x);
        if (minabs > a) {
            ans = A[i + 9];
            minabs = a;
        }
    }
    cout << ans << endl;

    return 0;
}
