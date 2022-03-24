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
    string S;
    int Q;
    cin >> N >> S >> Q;

    bool flip = false;
    for (int i = 0; i < Q; i++) {
        int T, A, B;
        cin >> T >> A >> B;
        A--;
        B--;
        if (T == 1) {
            if (flip) {
                A = (A + N) % (2 * N);
                B = (B + N) % (2 * N);
            }
            swap(S[A], S[B]);
        }else{
            flip = !flip;
        }
    }
    if (flip) {
        cout << S.substr(N) << S.substr(0, N) << endl;
    } else {
        cout << S << endl;
    }

    return 0;
}
