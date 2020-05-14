#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;


void solve(long long N, std::vector<long long> H){
    int ans =0;
    int count=0;
    int preh = H[0];
    for(int i=1;i<N;i++){
        if(preh >= H[i]){
            count++;
            preh=H[i];
        }
        else{
            ans = max(ans, count);
            count = 0;
            preh = H[i];
        }
    }
    ans = max(ans,count);
    cout<<ans<<endl;
}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> H(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&H[i]);
    }
    solve(N, std::move(H));
    return 0;
}
