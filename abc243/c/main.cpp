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
    cin >> N;
    vector<int> X(N), Y(N);
    rep(i, N) {
        cin >> X[i] >> Y[i];
    }
    string S;
    cin >> S;

    map<int, int> right_min, left_max;
    set<int> y_set;

    rep(i, N) {
        if (S[i] == 'R') {
            if (right_min.count(Y[i])) {
                chmin(right_min[Y[i]], X[i]);
            } else {
                right_min[Y[i]] = X[i];
            }
        } else {
            if (left_max.count(Y[i])) {
                chmax(left_max[Y[i]], X[i]);
            } else {
                left_max[Y[i]] = X[i];
            }
        }
        y_set.insert(Y[i]);
    }

    for (auto yi : y_set) {
        if (right_min.count(yi) && left_max.count(yi)) {
            if (right_min[yi] < left_max[yi]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}
