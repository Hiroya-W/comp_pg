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
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    std::vector<long long> H(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &H[i]);
    }
    vector<vector<int>> graph(N);
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        A--;
        B--;
        graph[A].push_back(B);
        graph[B].push_back(A);
    }
    ll tot = 0;
    vector<bool> chk(N, false);
    for (int i = 0; i < N; i++) {
        if (graph[i].size() == 0) {
            tot++;
            continue;
        }
        if (chk[i] == true) {
            continue;
        }
        ll maxh = H[i];
        bool ok = true;
        chk[i] = true;
        for (auto j : graph[i]) {
            if (maxh <= H[j]) {
                ok = false;
            } else {
                chk[j] = true;
            }
        }
        if (ok) {
            tot++;
        }
    }
    cout << tot << endl;
    return 0;
}
