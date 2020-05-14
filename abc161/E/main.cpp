#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, long long K, long long C, std::string S) {}

int main1() {
  long long N;
  scanf("%lld", &N);
  long long K;
  scanf("%lld", &K);
  long long C;
  scanf("%lld", &C);
  std::string S;
  std::cin >> S;
  solve(N, K, C, S);
  return 0;
}

int main() {
  int N, K, C;
  cin >> N >> K >> C;
  string S;

  cin >> S;
  int L[200000], R[200000];
  for (int i = 0; i < N; ++i) {
    L[i] = 0;
    R[i] = 0;
  }
  int cnt = 0;
  for (int i = 0; i < N; ++i) {
    if (S[i] != 'x') {
      L[i] = cnt - K;
      cnt++;
      i += C;
      if (cnt >= K) {
        break;
      }
    }
  }

  cnt = 0;
  for (int i = N - 1; i >= 0; --i) {
    if (S[i] != 'x') {
      R[i] = true;
      cnt++;
      i -= C;
      if (cnt >= K) {
        break;
      }
    }
  }

  for (int i = 0; i < N; ++i) {
    if (L[i] != 0 && R[i] != 0 && L[i] == R[i]) {
      // if (L[i] && R[i]) {
      cout << i + 1 << endl;
    }
  }
  return 0;
}
