#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;


void solve(long long N, long long D, long long A, std::vector<long long> X, std::vector<long long> H){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long D;
    scanf("%lld",&D);
    long long A;
    scanf("%lld",&A);
    std::vector<long long> X(N);
    std::vector<long long> H(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&X[i]);
        scanf("%lld",&H[i]);
    }
    solve(N, D, A, std::move(X), std::move(H));
    return 0;
}
