#include <bits/stdc++.h>

#include <algorithm>
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

bool check(vector<pair<int, int>> s) {
    int h = 0;
    for (auto p : s) {
        int b = h + p.first;
        if (b < 0) return false;
        h += p.second;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> ls, rs;
    int total = 0;
    rep(i, n) {
        string s;
        cin >> s;
        int h = 0, b = 0;
        for (char c : s) {
            if (c == '(')
                ++h;
            else
                --h;
            b = min(b, h);
        }
        if (h > 0)
            ls.emplace_back(b, h);
        else
            rs.emplace_back(b - h, -h);
        total += h;
    }
    sort(ls.rbegin(), ls.rend());
    sort(rs.rbegin(), rs.rend());
    if (check(ls) && check(rs) && total == 0) {
        cout << YES << endl;
    } else {
        cout << NO << endl;
    }

    return 0;
}
