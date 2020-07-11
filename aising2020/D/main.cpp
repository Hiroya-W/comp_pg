#include <bits/stdc++.h>

#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

typedef long long ll;

vector<int> memo;

int one_counter(string S) {
    int cnt = 0;
    rep(i, S.size()) {
        if (S[i] == '1') cnt++;
    }
    return cnt;
}

int solve(int numf) {
    int orif = numf;
    int nextf = numf;
    int cnt_one = 0;
    int ans = 0;

    // 計算したことがあったらその値を返す
    if (memo[numf] != -1) {
        return memo[numf];
    }
    // 割ったあまりが0の時は0回
    if (numf == 0) {
        return 0;
    }

    while (numf != 0) {
        if (numf % 2 == 1) {
            cnt_one++;
        }
        numf /= 2;
    }

    nextf %= cnt_one;

    // 計算したことがあったらその値を返す
    if (memo[nextf] != -1) {
        return memo[nextf];
    }
    ans = solve(nextf);

    memo[nextf] = ans + 1;
    return memo[nextf] + 1;
}

int main() {
    memo = vector<int>(200005);
    fill(memo.begin(), memo.end(), -1);
    memo[0] = 0;
    int N;
    string X;
    cin >> N >> X;

    rep(i, N) {
        int ans = 0;
        int zero = 0;
        string nextX = X;
        if (nextX[i] == '0') {
            nextX[i] = '1';
        } else {
            nextX[i] = '0';
        }
        zero = one_counter(nextX);
        ans = solve(zero);
        cout << ans << endl;
    }
    return 0;
}
