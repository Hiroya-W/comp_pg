#include <bits/stdc++.h>
using namespace std;

#define EPS             (1e-7)
#define INF             (1e9)
#define PI              (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n)  for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

typedef long long ll;

template<class T>
inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template<class T>
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return 1;
    }
    return 0;
}

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> front(N + 1);
    vector<int> back(N + 1);
    fill(front.begin(), front.end(), -1);
    fill(back.begin(), back.end(), -1);

    rep(i, Q) {
        int c;
        cin >> c;
        if (c == 1) {
            int x, y;
            cin >> x >> y;
            back[x] = y;
            front[y] = x;
        } else if (c == 2) {
            int x, y;
            cin >> x >> y;
            back[x] = -1;
            front[y] = -1;
        } else if (c == 3) {
            int x;
            cin >> x;
            while (front[x] != -1) {
                x = front[x];
            }

            vector<int> ans;
            while (x != -1) {
                ans.push_back(x);
                x = back[x];
            }
            cout << ans.size() << " ";
            rep(j, ans.size()) {
                printf("%d%c", ans[j], j == ans.size() - 1 ? '\n' : ' ');
            }
        }
    }
    return 0;
}
