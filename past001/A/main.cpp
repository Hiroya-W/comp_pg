#include <bits/stdc++.h>

#include <cctype>
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
    string s;
    cin >> s;
    int num = 0;
    rep(i, 3) {
        if (!isdigit(s[i])) {
            cout << "error" << endl;
            return 0;
        }
        num = num * 10 + (s[i] - '0');
    }
    cout << num * 2 << endl;
    return 0;
}
