#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, std::vector<long long> A, std::vector<long long> B) {
  ll tot = 0;
  rep(i, N) {
    ll machi1 = min(B[i], A[i]);
    B[i] -= machi1;
    tot += machi1;
    if (B[i] > 0) {
      ll machi2 = min(B[i], A[i + 1]);
      A[i + 1] -= machi2;
      tot += machi2;
    }
  }
  cout << tot << endl;
}

int main() {
  long long N;
  scanf("%lld", &N);
  std::vector<long long> A(N + 1);
  for (int i = 0; i < N + 1; i++) {
    scanf("%lld", &A[i]);
  }
  std::vector<long long> B(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &B[i]);
  }
  solve(N, std::move(A), std::move(B));
  return 0;
}
