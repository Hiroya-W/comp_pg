#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, long long D, std::vector<std::vector<long long>> X) {
  rep(i, N) {}
}

int main() {
  long long N;
  scanf("%lld", &N);
  long long D;
  scanf("%lld", &D);
  std::vector<std::vector<long long>> X(N, std::vector<long long>(D));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < D; j++) {
      scanf("%lld", &X[i][j]);
    }
  }
  solve(N, D, std::move(X));
  return 0;
}
