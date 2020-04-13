#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, std::vector<long long> A) {}

int main() {
  long long max1 = 0;
  long long max2 = 0;
  long long N;
  scanf("%lld", &N);
  std::vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &A[i]);
    if (max1 < A[i]) {
      max2 = max1;
      max1 = A[i];
    } else {
      if (max2 < A[i]) {
        max2 = A[i];
      }
    }
  }
  rep(i, N) {
    if (A[i] == max1) {
      cout << max2 << endl;
    } else {
      cout << max1 << endl;
    }
  }
  return 0;
}
