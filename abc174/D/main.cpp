#include <bits/stdc++.h>

#include <type_traits>
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
    int N;
    int cnt = 0;
    string S;
    cin >> N;
    cin >> S;
    int L = 0, R = N - 1;
    while (!(R <= L)) {
        if (!(S[L] == 'W')) {
            L++;
            continue;
        }

        if (!(S[R] == 'R')) {
            R--;
            continue;
        }

        S[L] = 'R';
        S[R] = 'W';
        L++;
        R--;
        cnt++;
    }
    cout << cnt << endl;
    // cout << S << endl;
    return 0;
}
