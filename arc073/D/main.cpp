#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;


void solve(long long N, long long W, std::vector<long long> w, std::vector<long long> v){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long W;
    scanf("%lld",&W);
    std::vector<long long> w(N);
    std::vector<long long> v(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&w[i]);
        scanf("%lld",&v[i]);
    }
    solve(N, W, std::move(w), std::move(v));
    return 0;
}
