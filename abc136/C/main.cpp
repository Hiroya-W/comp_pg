#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

typedef long long ll;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, std::vector<long long> H) {
  ll prev = H[N - 1];
  rep1(i, N) {
    if (prev - H[N - i - 1] < 0) {
      if (prev - (H[N - i - 1] - 1) == 0) {
        H[N - i - 1]--;
      } else {
        cout << NO << endl;
        return;
      }
    }

    prev = H[N - i - 1];
  }
  cout << YES << endl;
}
int main() {
  long long N;
  scanf("%lld", &N);
  std::vector<long long> H(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &H[i]);
  }
  solve(N, std::move(H));
  return 0;
}
