#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

const string YES = "Yes";
const string NO = "No";

void solve(ll N, vector<pair<ll, ll>> A) {
    ll time = 0;
    sort(A.begin(), A.end());
    for (auto i : A) {
        time += i.second;
        if (time > i.first) {
            cout << NO << endl;
            return;
            ;
        }
    }
    cout << YES << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    vector<pair<ll, ll>> A(N);
    for (int i = 0; i < N; i++) {
        ll B, C;
        scanf("%lld", &B);
        scanf("%lld", &C);
        A[i].first = C;
        A[i].second = B;
    }
    solve(N, move(A));
    return 0;
}
