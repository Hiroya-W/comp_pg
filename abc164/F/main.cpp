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


void solve(long long N, std::vector<long long> S, std::vector<long long> T, std::vector<long long> U, std::vector<long long> V){

}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> S(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&S[i]);
    }
    std::vector<long long> T(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&T[i]);
    }
    std::vector<long long> U(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&U[i]);
    }
    std::vector<long long> V(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&V[i]);
    }
    solve(N, std::move(S), std::move(T), std::move(U), std::move(V));
    return 0;
}
