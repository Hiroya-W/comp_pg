#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

const string YES = "YES";
const string NO = "NO";

void solve(long long N, std::vector<long long> p) {
  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (p[i] != i + 1) {
      ans++;
    }
  }
  if (ans == 2 || ans == 0) {
    cout << YES << endl;
  } else {
    cout << NO << endl;
  }
}

int main() {
  long long N;
  scanf("%lld", &N);
  std::vector<long long> p(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &p[i]);
  }
  solve(N, std::move(p));
  return 0;
}
