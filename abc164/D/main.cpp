#include <bits/stdc++.h>

#include <string>
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
    string S;
    cin >> S;

    int P = 2019;
    int N = S.size();
    vector<int> d(N + 1);
    int count = 1;
    for (int i = N - 1; 0 <= i; i--) {
        int a = (S[i] - '0') * count % P;
        d[i] = (d[i + 1] + a) % P;
        count *= 10;
        count %= P;
    }

    vector<int> sum(P);
    ll ans = 0;
    for (int i = N; 0 <= i; i--) {
        ans += sum[d[i]];
        sum[d[i]]++;
    }
    cout << ans << endl;

    return 0;
}
