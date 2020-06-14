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
    string s, t;
    cin >> s >> t;

    if (s == t) {
        cout << "same" << endl;
        return 0;
    }

    rep(i, s.size()) {
        s[i] = tolower(s[i]);
    }

    rep(i, t.size()) {
        t[i] = tolower(t[i]);
    }

    if (s == t) {
        cout << "case-insensitive" << endl;
        return 0;
    }

    cout << "different" << endl;
    return 0;
}
