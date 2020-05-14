#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

const long long MOD = 1000000007;

void solve(long long Q, std::vector<long long> X, std::vector<long long> Y){

}

int main(){
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> X(Q);
    std::vector<long long> Y(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&X[i]);
        scanf("%lld",&Y[i]);
    }
    solve(Q, std::move(X), std::move(Y));
    return 0;
}
