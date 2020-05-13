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


void solve(std::vector<long long> E, long long B, std::vector<long long> L){

}

int main(){
    std::vector<long long> E(5-0+1);
    for(int i = 0 ; i < 5-0+1 ; i++){
        scanf("%lld",&E[i]);
    }
    long long B;
    scanf("%lld",&B);
    std::vector<long long> L(5-0+1);
    for(int i = 0 ; i < 5-0+1 ; i++){
        scanf("%lld",&L[i]);
    }
    solve(std::move(E), B, std::move(L));
    return 0;
}
