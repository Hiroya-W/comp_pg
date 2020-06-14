#include <bits/stdc++.h>

#include <algorithm>
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
    int N, M, Q;
    cin >> N >> M >> Q;
    vector<int> p(M);
    vector<vector<bool>> ac(N, vector<bool>(M));
    fill(p.begin(), p.end(), N);
    rep(i, Q) {
        int type;
        cin >> type;
        if (type == 1) {
            int hito;
            ll tot = 0;
            cin >> hito;
            hito--;
            rep(j, M) {
                if (ac[hito][j]) {
                    tot += p[j];
                }
            }
            cout << tot << endl;
        } else {
            int hito, pro;
            cin >> hito >> pro;
            hito--;
            pro--;
            p[pro] = max(0, p[pro] - 1);
            ac[hito][pro] = true;
        }
    }
    return 0;
}
