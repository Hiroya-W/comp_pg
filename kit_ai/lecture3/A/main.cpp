#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

int main() {
    int N;
    cin >> N;
    vector A(N, vector<int>(N));
    rep(i, N) {
        int u, k;
        cin >> u >> k;
        rep(j, k) {
            int v;
            cin >> v;
            A[u - 1][v - 1] = 1;
        }
    }
    rep(i, N) {
        rep(j, N) {
            printf("%d%c", A[i][j], j == N - 1 ? '\n' : ' ');
        }
    }
    return 0;
}
