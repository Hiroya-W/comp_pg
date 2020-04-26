#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

typedef long long ll;


void solve(long long N, std::vector<long long> u, std::vector<long long> v, std::vector<long long> w){

}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> u(N-1);
    std::vector<long long> v(N-1);
    std::vector<long long> w(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&u[i]);
        scanf("%lld",&v[i]);
        scanf("%lld",&w[i]);
    }
    solve(N, std::move(u), std::move(v), std::move(w));
    return 0;
}
