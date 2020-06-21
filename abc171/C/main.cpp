#include <bits/stdc++.h>

#include <algorithm>
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

typedef long long ll;

int main() {
    ll N;
    cin >> N;
    N--;
    vector<int> ans;
    if (N == 0) {
        ans.push_back(0);
    }
    while (N != 0) {
        ans.push_back(N % 26);
        N /= 26;
    }
    reverse(ans.begin(), ans.end());
    rep(i, ans.size() - 1) {
        char c;
        if (ans[i] == 0) {
            c = ans[i] + 'a';
        } else {
            c = ans[i] - 1 + 'a';
        }
        cout << c;
    }
    char c = ans[ans.size() - 1] + 'a';
    cout << c << endl;
    return 0;
}
