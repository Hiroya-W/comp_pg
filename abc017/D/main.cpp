#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

const long long MOD = 1000000007;

void solve(long long N, long long M, std::vector<long long> f){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> f(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&f[i]);
    }
    solve(N, M, std::move(f));
    return 0;
}
