#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;


void solve(long long N, long long T, std::vector<long long> A, std::vector<long long> B){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long T;
    scanf("%lld",&T);
    std::vector<long long> A(N);
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
        scanf("%lld",&B[i]);
    }
    solve(N, T, std::move(A), std::move(B));
    return 0;
}
