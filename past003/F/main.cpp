#include <bits/stdc++.h>

#include <algorithm>
#include <cctype>
#include <iterator>
#include <string>
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
    int N;
    cin >> N;
    vector<string> mat(N);
    rep(i, N) {
        cin >> mat[i];
    }

    string ans;
    rep(i, N / 2) {
        rep(j, N) {
            // 同じ文字がある時
            if (mat[N - i - 1].find(mat[i][j]) != string::npos) {
                ans.push_back(mat[i][j]);
                break;
            }
        }
    }
    // 長さが足りていない時、無理
    if (ans.size() != N / 2) {
        cout << "-1" << endl;
        return 0;
    }

    string ans1 = ans;
    reverse(ans1.begin(), ans1.end());
    if (N % 2 == 0) {
        cout << ans << ans1 << endl;
    } else {
        cout << ans << mat[N / 2][0] << ans1 << endl;
    }
    return 0;
}
