#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, long long L) {
  int tmp = 0;
  long long apple = INF;
  int tot = 0;
  rep(i, N) {
    tot += L + i;
    if (apple > abs(L + i)) {
      apple = abs(L + i);
      tmp = L + i;
    }
  }
  cout << tot - tmp << endl;
}

int main() {
  long long N;
  scanf("%lld", &N);
  long long L;
  scanf("%lld", &L);
  solve(N, L);
  return 0;
}
