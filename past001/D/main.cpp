#include <bits/stdc++.h>

#include <algorithm>
#include <cctype>
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

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> chk(N + 1);
    rep(i, N) {
        cin >> A[i];
        chk[A[i]]++;
    }
    int now = -1;
    int old = -1;
    rep(i, N + 1) {
        if (chk[i] == 2) {
            now = i;
        }
    }
    if (now == -1) {
        cout << "Correct" << endl;
    } else {
        rep(i, N + 1) {
            if (chk[i] == 0) {
                old = i;
            }
        }
        cout << now << " " << old << endl;
    }

    return 0;
}
