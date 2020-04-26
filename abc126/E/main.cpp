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


void solve(long long N, long long M, std::vector<long long> X, std::vector<long long> Y, std::vector<long long> Z){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> X(M);
    std::vector<long long> Y(M);
    std::vector<long long> Z(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&X[i]);
        scanf("%lld",&Y[i]);
        scanf("%lld",&Z[i]);
    }
    solve(N, M, std::move(X), std::move(Y), std::move(Z));
    return 0;
}
