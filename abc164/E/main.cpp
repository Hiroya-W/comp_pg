#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

typedef long long ll;


void solve(long long N, long long M, long long S, std::vector<long long> U, std::vector<long long> V, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C, std::vector<long long> D){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    long long S;
    scanf("%lld",&S);
    std::vector<long long> U(M);
    std::vector<long long> V(M);
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&U[i]);
        scanf("%lld",&V[i]);
        scanf("%lld",&A[i]);
        scanf("%lld",&B[i]);
    }
    std::vector<long long> C(N);
    std::vector<long long> D(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&C[i]);
        scanf("%lld",&D[i]);
    }
    solve(N, M, S, std::move(U), std::move(V), std::move(A), std::move(B), std::move(C), std::move(D));
    return 0;
}
