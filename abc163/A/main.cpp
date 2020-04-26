#include <bits/stdc++.h>

#include <cmath>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

int main() {
    int R;
    cin >> R;
    cout << 2 * R * M_PI << endl;
    if (R < 1) {
        cout << "YES" << endl;
    }
    return 0;
}
