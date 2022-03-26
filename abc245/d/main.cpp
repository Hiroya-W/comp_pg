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

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N + 1);
    vector<int> B(M + 1);
    vector<int> C(N + M + 1);
    rep(i, N + 1) {
        cin >> A[N - i];
    }
    rep(i, N + M + 1) {
        cin >> C[N + M - i];
    }

    rep(i, M + 1) {
        B[i] = C[i] / A[i];
        rep(j, N + 1) {
            C[i + j] -= B[i] * A[i];
        }
    }
    rep(i, M + 1) {
        cout << B[M - i] << endl;
    }

    return 0;
}
