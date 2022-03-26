#include <bits/stdc++.h>
using namespace std;

#define EPS             (1e-7)
#define INF             (1e12)
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

int n, k;
vector<int> a(200001), b(200001);
vector<int> memo_a(200001, -1);
vector<int> memo_b(200001, -1);

bool dfs(int index, bool s, int prev) {
    bool res = false;
    if (index == n) {
        if (!s) {
            memo_a[index - 1] = 1;
        } else {
            memo_b[index - 1] = 1;
        }
        return true;
    }

    if (!s) {
        if (memo_a[index] != -1) {
            return memo_a[index] == 1 ? true : false;
        }
        if (memo_b[index] != -1) {
            return memo_b[index] == 1 ? true : false;
        }
    }

    if (abs(prev - a[index]) <= k) {
        res = dfs(index + 1, 0, a[index]);
        if (res) {
            if (s) {
                memo_a[index] = 1;
            } else {
                memo_b[index] = 1;
            }
            return res;
        }
    }

    if (abs(prev - b[index]) <= k) {
        res = dfs(index + 1, 1, b[index]);
        if (res) {
            if (s) {
                memo_a[index] = 1;
            } else {
                memo_b[index] = 1;
            }
            return res;
        }
    }

    if (s) {
        memo_a[index] = 0;
    } else {
        memo_b[index] = 0;
    }
    return res;
    return res;
}

int main() {
    cin >> n >> k;
    rep(i, n) {
        cin >> a[i];
    }
    rep(i, n) {
        cin >> b[i];
    }

    if (dfs(1, false, a[0]) || dfs(1, true, b[0])) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
