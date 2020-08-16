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
    int K;
    cin >> K;
    int x = 7 % K;
    set<int> s;
    int cnt = 1;
    while (s.count(x) == 0) {
        if (x == 0) {
            cout << cnt << endl;
            return 0;
        }
        s.insert(x);
        x = (x * 10 + 7) % K;
        cnt++;
    }
    cout << "-1" << endl;
    return 0;
}
