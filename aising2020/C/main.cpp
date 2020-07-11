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
    vector<int> arr(100000);
    cin >> N;
    rep1(x, 100 + 1) {
        rep1(y, 100 + 1) {
            rep1(z, 100 + 1) {
                int ans = x * x + y * y + z * z + x * y + y * z + z * x;
                arr[ans]++;
            }
        }
    }
    for (int i = 1; i <= N; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
