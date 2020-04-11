#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

int main() {
  long long N;
  scanf("%lld", &N);
  std::vector<std::string> s(N);
  map<vector<int>, long long> pattern;
  for (int i = 0; i < N; i++) {
    std::cin >> s[i];

    vector<int> pat(26);
    rep(j, s[i].length()) { pat[s[i][j] - 'a']++; }
    pattern[pat]++;
  }
  ll ans = 0;
  for (auto &i : pattern) {
    ans += i.second * (i.second - 1) / 2;
  }
  cout << ans << endl;
  return 0;
}
