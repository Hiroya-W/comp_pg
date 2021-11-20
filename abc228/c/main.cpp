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
    int N, K;
    cin >> N >> K;
    vector<int> score(N);

    rep(i, N) {
        rep(j, 3) {
            int p;
            cin >> p;
            score[i] += p;
        }
    }

    vector<int> sorted_score(score);
    sort(sorted_score.begin(), sorted_score.end());
    reverse(sorted_score.begin(), sorted_score.end());

    int K_score = sorted_score[K - 1];

    rep(i, N) {
        // cout << score[i] << endl;
        if (K_score - score[i] <= 300) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
