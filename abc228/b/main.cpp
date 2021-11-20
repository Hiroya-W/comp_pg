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
    int N, X;
    cin >> N >> X;
    X--;
    vector<int> A(N);
    vector<bool> known(N, false);
    rep(i, N) {
        cin >> A[i];
        A[i]--;
    }

    int ans = 1;
    int next = X;
    known[X] = true;
    while (!known[A[next]]) {
        ans++;
        known[A[next]] = true;
        next = A[next];
    }

    cout << ans << endl;

    return 0;
}
