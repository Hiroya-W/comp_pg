#include <bits/stdc++.h>

#include <cctype>
#include <vector>
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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int pre = a[0];
    for (int i = 1; i < n; i++) {
        int today = a[i];
        if (pre < today) {
            cout << "up " << (today - pre) << endl;
        } else if (pre > today) {
            cout << "down " << (pre - today) << endl;
        } else {
            cout << "stay" << endl;
        }
        pre = today;
    }
    return 0;
}
