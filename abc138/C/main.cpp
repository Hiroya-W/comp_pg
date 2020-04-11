#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, std::vector<long long> v) {
  sort(v.begin(), v.end());
  double ans = 0;
  ans += v[0];
  for (int i = 1; i < N; i++) {
    ans = (ans + v[i]) / 2.0;
  }
  cout << ans << endl;
}

int main() {
  long long N;
  scanf("%lld", &N);
  std::vector<long long> v(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &v[i]);
  }
  solve(N, std::move(v));
  return 0;
}
