#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;


void solve(long long N, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C){
    ll tot = 0;
    int pre = 0;
    pre = A[0];
    tot += B[pre];

    for(int i=1;i<N;i++){
        int next = A[i];
        tot+= B[next];
        if(next - pre == 1){
            tot += C[next-1];
        }
        pre = next;
    }
    cout<<tot<<endl;
}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
        A[i]--;
    }
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&B[i]);
    }
    std::vector<long long> C(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&C[i]);
    }
    solve(N, std::move(A), std::move(B), std::move(C));
    return 0;
}
