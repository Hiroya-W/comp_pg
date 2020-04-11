#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long K, long long X) {
  K--;
  ll left = max((ll)-10000000, X - K);
  ll right = min((ll)10000000, X + K);
  for (ll i = left; i <= right; i++) {
    cout << i;
    if (i != right) {
      cout << " ";
    }
  }
  cout << endl;
}

int main() {
  long long K;
  scanf("%lld", &K);
  long long X;
  scanf("%lld", &X);
  solve(K, X);
  return 0;
}
