#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;


void solve(long long N, long long Q, std::vector<long long> S, std::vector<long long> T, std::vector<long long> X, std::vector<long long> D){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> S(N);
    std::vector<long long> T(N);
    std::vector<long long> X(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&S[i]);
        scanf("%lld",&T[i]);
        scanf("%lld",&X[i]);
    }
    std::vector<long long> D(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&D[i]);
    }
    solve(N, Q, std::move(S), std::move(T), std::move(X), std::move(D));
    return 0;
}
