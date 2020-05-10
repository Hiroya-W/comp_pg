#include <bits/stdc++.h>

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
    ll K;
    cin >> N >> K;
    vector<int> A(N);
    vector<int> visited(N);
    rep(i, N) {
        int tmp    = 0;
        visited[i] = 0;
        cin >> tmp;
        tmp--;
        A[i] = tmp;
    }

    int now  = 0;
    int loop = 0;
    int cnt  = 0;
    while (!visited[now] && cnt < K) {
        visited[now] = cnt;
        now          = A[now];
        cnt++;
    }
    if (cnt == K) {
        cout << now + 1 << endl;
        return 0;
    }

    loop = cnt - visited[now];
    K -= cnt;
    K = K % loop;
    rep(i, K) {
        now = A[now];
    }
    cout << now + 1 << endl;

    return 0;
}
