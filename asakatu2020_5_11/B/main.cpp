#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

typedef long long ll;

int main() {
    int num[3] = {};

    rep(i, 3) {
        cin >> num[i];
    }
    sort(num, num + 3);

    int cnt = 0;
    while (!((num[0] == num[1]) && (num[1] == num[2]))) {
        cnt++;
        if (num[1] < num[2]) {
            num[0]++;
            num[1]++;
        } else {
            num[0] += 2;
        }
        sort(num, num + 3);
    }
    cout << cnt << endl;

    return 0;
}
