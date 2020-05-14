#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

const long long MOD = 2019;

void solve(long long L, long long R) {
  R = min(L + 2019 * 2, R);
  ll ans = INF;
  for (int i = L; i <= R; i++) {
    for (int j = i + 1; j <= R; j++) {
      ans = min(ans, (ll)i * j % 2019);
    }
  }
  cout << ans << endl;
}

int main() {
  long long L;
  scanf("%lld", &L);
  long long R;
  scanf("%lld", &R);
  solve(L, R);
  return 0;
}
