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
    int N;
    int maxA = 0, minB = 1001;
    cin >> N;
    rep(i, N) {
        int A;
        cin >> A;
        chmax(maxA, A);
    }
    rep(i, N) {
        int B;
        cin >> B;
        chmin(minB, B);
    }

    if (maxA > minB) {
        cout << "0" << endl;
    } else {
        cout << minB - maxA + 1 << endl;
    }
    return 0;
}
