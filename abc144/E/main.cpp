#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;


void solve(long long N, long long K, std::vector<long long> A, std::vector<long long> F){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    std::vector<long long> F(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&F[i]);
    }
    solve(N, K, std::move(A), std::move(F));
    return 0;
}
