#include <bits/stdc++.h>
using namespace std;

#define EPS             (1e-7)
#define INF             (1e9)
#define PI              (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n)  for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

typedef long long ll;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    string smin = s;
    string smax = s;
    s += s;
    rep(i, n) {
        smin = min(smin, s.substr(i, n));
        smax = max(smax, s.substr(i, n));
    }
    cout << smin << endl;
    cout << smax << endl;
    return 0;
}
