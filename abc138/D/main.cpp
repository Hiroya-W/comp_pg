#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;


void solve(long long N, long long Q, std::vector<long long> a, std::vector<long long> b, std::vector<long long> p, std::vector<long long> x){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> a(N-1);
    std::vector<long long> b(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&a[i]);
        scanf("%lld",&b[i]);
    }
    std::vector<long long> p(Q);
    std::vector<long long> x(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&p[i]);
        scanf("%lld",&x[i]);
    }
    solve(N, Q, std::move(a), std::move(b), std::move(p), std::move(x));
    return 0;
}
