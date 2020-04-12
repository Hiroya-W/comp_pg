#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;


void solve(long long n, std::vector<long long> p){

}

int main(){
    long long n;
    scanf("%lld",&n);
    std::vector<long long> p(n);
    for(int i = 0 ; i < n ; i++){
        scanf("%lld",&p[i]);
    }
    solve(n, std::move(p));
    return 0;
}
