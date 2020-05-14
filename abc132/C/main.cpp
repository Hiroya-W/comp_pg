#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, std::vector<long long> d) {
  sort(d.begin(), d.end());
  if (d[N / 2] - d[N / 2 - 1] == 0) {
    cout << "0" << endl;
  } else {
    cout << d[N / 2] - d[N / 2 - 1] << endl;
  }
}

int main() {
  long long N;
  scanf("%lld", &N);
  std::vector<long long> d(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &d[i]);
  }
  solve(N, std::move(d));
  return 0;
}
