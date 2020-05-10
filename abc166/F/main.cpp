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

const string YES = "Yes";
const string NO = "No";

int main() {
    int n;
    cin >> n;
    vector<int> d(3);
    rep(i, 3) cin >> d[i];
    vector<pair<int, int>> q;
    rep(i, n) {
        string s;
        cin >> s;
        int a = 0, b = 1;
        if (s == "AB") a = 0, b = 1;
        if (s == "AC") a = 0, b = 2;
        if (s == "BC") a = 1, b = 2;
        q.emplace_back(a, b);
    }
    string ans;
    auto add = [&](int a, int b) {
        d[a]++;
        d[b]--;
        ans += 'A' + a;
    };
    q.emplace_back(0, 1);
    rep(i, n) {
        int a = q[i].first;
        int b = q[i].second;
        if (!d[a] && !d[b]) {
            cout << NO << endl;
            return 0;
        }
        if (!d[a]) {
            add(a, b);
        } else if (!d[b]) {
            add(b, a);
        } else {
            int na = q[i + 1].first;
            int nb = q[i + 1].second;
            if (a == na || a == nb) {
                add(a, b);
            } else {
                add(b, a);
            }
        }
    }
    cout << YES << endl;
    rep(i, n) { cout << ans[i] << endl; }
    return 0;
}
