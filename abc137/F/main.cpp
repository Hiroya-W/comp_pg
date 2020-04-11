#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

const long long MOD = 2;

void solve(long long p, std::vector<long long> a){

}

int main(){
    long long p;
    scanf("%lld",&p);
    std::vector<long long> a(p-1-0+1);
    for(int i = 0 ; i < p-1-0+1 ; i++){
        scanf("%lld",&a[i]);
    }
    solve(p, std::move(a));
    return 0;
}
