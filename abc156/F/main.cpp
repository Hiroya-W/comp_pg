#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const long long MOD = 2;

void solve(long long k, long long q, std::vector<long long> d, std::vector<long long> n, std::vector<long long> x, std::vector<long long> m){

}

int main(){
    long long k;
    scanf("%lld",&k);
    long long q;
    scanf("%lld",&q);
    std::vector<long long> d(k-1-0+1);
    for(int i = 0 ; i < k-1-0+1 ; i++){
        scanf("%lld",&d[i]);
    }
    std::vector<long long> n(q);
    std::vector<long long> x(q);
    std::vector<long long> m(q);
    for(int i = 0 ; i < q ; i++){
        scanf("%lld",&n[i]);
        scanf("%lld",&x[i]);
        scanf("%lld",&m[i]);
    }
    solve(k, q, std::move(d), std::move(n), std::move(x), std::move(m));
    return 0;
}
