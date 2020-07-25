#include <bits/stdc++.h>

#include <algorithm>
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
    ll ans = 1000;
    int N;
    cin >> N;
    int A[N + 1];
    // int grad[N];

    rep(i, N) cin >> A[i];
    A[N] = 0;
    // fill(grad,grad+N,0);

    int minA = A[0];
    for (int i = 1; i < N; i++) {
        // 最小値のところで買うほうが良い
        if (minA > A[i]) {
            minA = A[i];
        }
        // 高くで売れる時
        else if (minA < A[i]) {
            int maxA = A[i];

            int j = i;
            // それより後でもっと高く売れるかも
            // 安い値段が来たら、そこで売って、次高くなる時に買いたいので、安くなるまで
            while (j < N && maxA <= A[j]) {
                maxA = A[j];
                j++;
            }
            // そこの添字を戻す
            i = j;

            ll cnt = ans / minA;
            // 一番安くで買う
            ans -= minA * cnt;
            // 買った分を高い値段で売る
            ans += cnt * maxA;
            // 最小値を更新
            minA = A[i];
        }
    }
    cout << ans << endl;

    return 0;
}
