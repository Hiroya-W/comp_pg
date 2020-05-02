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


void solve(long long N, std::vector<long long> V, std::vector<long long> C){

}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> V(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&V[i]);
    }
    std::vector<long long> C(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&C[i]);
    }
    solve(N, std::move(V), std::move(C));
    return 0;
}
