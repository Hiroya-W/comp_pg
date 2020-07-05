#include <bits/stdc++.h>
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
    int Q = N / 1000;
    int R = N % 1000;

    if (R == 0) {
        cout << "0" << endl;
    } else {
        cout << (1000 - R) << endl;
    }

    return 0;
}
