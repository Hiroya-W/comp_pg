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

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

typedef long long ll;

int n, m, q;
vector<int> a, b, c, d;
int ans;

void dfs(vector<int> A) {
    if (A.size() == n + 1) {
        int now = 0;
        rep(i, q) {
            if (A[b[i]] - A[a[i]] == c[i]) now += d[i];
        }
        ans = max(ans, now);
        return;
    }

    A.push_back(A.back());
    while (A.back() <= m) {
        dfs(A);
        A.back()++;
    }
}

int main() {
    cin >> n >> m >> q;
    a = b = c = d = vector<int>(q);
    rep(i, q) { cin >> a[i] >> b[i] >> c[i] >> d[i]; }
    dfs(vector<int>(1, 1));
    cout << ans << endl;
    return 0;
}
