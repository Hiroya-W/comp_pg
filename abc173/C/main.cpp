#include <bits/stdc++.h>

#include <vector>
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
    int H, W, K;
    cin >> H >> W >> K;
    vector<string> field(H);
    rep(i, H) {
        cin >> field[i];
    }

    int ans = 0;
    for (int hbit = 0; hbit < (1 << H); hbit++) {
        for (int wbit = 0; wbit < (1 << W); wbit++) {
            int cnt = 0;
            for (int h = 0; h < H; h++) {
                for (int w = 0; w < W; w++) {
                    if (hbit & (1 << h) || wbit & (1 << w)) {
                        continue;
                    }
                    if (field[h][w] == '#') {
                        cnt++;
                    }
                }
            }
            if (cnt == K) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
