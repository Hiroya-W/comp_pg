#include <bits/stdc++.h>

#include <algorithm>
#include <cctype>
#include <set>
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
    int N, Q;
    cin >> N >> Q;
    bool ft[101][101] = {};
    rep(i, Q) {
        int op;
        cin >> op;
        if (op == 1) {
            int a, b;
            cin >> a >> b;
            ft[a][b] = true;
        } else if (op == 2) {
            int a;
            cin >> a;
            rep(j, N + 1) {
                if (ft[j][a]) {
                    ft[a][j] = true;
                }
            }
        } else if (op == 3) {
            int a;
            cin >> a;
            set<int> candidate;
            rep(j, N + 1) {
                if (ft[a][j]) {
                    rep(k, N + 1) {
                        if (ft[j][k]) {
                            candidate.insert(k);
                        }
                    }
                }
            }
            for (int j : candidate) {
                ft[a][j] = true;
            }
        }
    }
    rep1(i, N + 1) {
        rep1(j, N + 1) {
            if (i == j) {
                cout << "N";
                continue;
            }
            cout << (ft[i][j] ? "Y" : "N");
        }
        cout << endl;
    }

    return 0;
}
