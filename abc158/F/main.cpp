#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const long long MOD = 998244353;

void solve(long long N, std::vector<long long> X, std::vector<long long> D){

}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> X(N);
    std::vector<long long> D(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&X[i]);
        scanf("%lld",&D[i]);
    }
    solve(N, std::move(X), std::move(D));
    return 0;
}
