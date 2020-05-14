#include <algorithm>
#include <bits/stdc++.h>
#include <iterator>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(std::string S) {
  int n = S.size();
  vector<int> ans(n);
  rep(ri, 2) {
    // Rについて解く
    int cnt = 0;
    rep(i, n) {
      if (S[i] == 'R')
        cnt++;
      else {
        ans[i] += cnt / 2;
        ans[i - 1] += (cnt + 1) / 2;
        cnt = 0;
      }
    }
    reverse(ans.begin(), ans.end());
    reverse(S.begin(), S.end());
    rep(i, n) {
      if (S[i] == 'L')
        S[i] = 'R';
      else
        S[i] = 'L';
    }
  }
  rep(i, n) { printf("%d%c", ans[i], i == n - 1 ? '\n' : ' '); }
}

int main() {
  std::string S;
  std::cin >> S;
  solve(S);
  return 0;
}
