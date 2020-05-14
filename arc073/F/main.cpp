#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;


void solve(long long N, long long Q, long long A, long long B, std::vector<long long> x){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long Q;
    scanf("%lld",&Q);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    std::vector<long long> x(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&x[i]);
    }
    solve(N, Q, A, B, std::move(x));
    return 0;
}
