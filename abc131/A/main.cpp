#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(string S) {
  string ans = "Good";
  char prev = 0;
  rep(i, S.size()) {
    if (prev != S[i])
      prev = S[i];
    else
      ans = "Bad";
  }
  cout << ans << endl;
}

int main() {
  string S;
  cin >> S;
  solve(S);
  return 0;
}
