#include <bits/stdc++.h>

#include <cstdio>
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
    int N, L;
    cin >> N >> L;
    vector<string> S(L + 1);
    getline(cin, S[0]);
    rep(i, L + 1) {
        getline(cin, S[i]);
    }
    int ans = 0;
    rep(i, S[L].size()) {
        if (S[L][i] == 'o') ans = i;
    }

    for (int i = L - 1; i >= 0; i--) {
        if (ans - 1 >= 0 && S[i][ans - 1] == '-')
            ans -= 2;
        else if (ans + 1 < S[i].size() && S[i][ans + 1] == '-')
            ans += 2;
    }
    cout << ans / 2 + 1 << endl;
    return 0;
}
