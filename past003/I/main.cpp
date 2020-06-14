#include <bits/stdc++.h>

#include <cctype>
#include <sstream>
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
    int N, Q;
    cin >> N >> Q;
    // vector<vector<ll>> arr(N, vector<ll>(N));
    vector<int> tate(N);
    vector<int> yoko(N);

    rep(i, N) {
        // rep(j, N) {
        //     arr[i][j] = N * i + j;
        // }
        tate[i] = i;
        yoko[i] = i;
    }

    bool trans = false;
    rep(i, Q) {
        int type;
        cin >> type;

        if (type == 1) {
            int A, B;
            cin >> A >> B;
            A--;
            B--;
            if (trans) {
                swap(yoko[A], yoko[B]);
            } else {
                swap(tate[A], tate[B]);
            }
        } else if (type == 2) {
            int A, B;
            cin >> A >> B;
            A--;
            B--;
            if (trans) {
                swap(tate[A], tate[B]);
            } else {
                swap(yoko[A], yoko[B]);
            }
        } else if (type == 3) {
            trans = !trans;
        } else {
            int A, B;
            cin >> A >> B;
            A--;
            B--;
            if (trans) {
                swap(A, B);
            }
            // cout << arr[tate[A]][yoko[B]] << endl;
            ll ans = (ll)N * tate[A] + yoko[B];
            cout << ans << endl;
        }
    }
    return 0;
}
