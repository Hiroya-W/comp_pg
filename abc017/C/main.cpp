#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;


void solve(long long N, long long M, std::vector<long long> l, std::vector<long long> r, std::vector<long long> s){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> l(N);
    std::vector<long long> r(N);
    std::vector<long long> s(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&l[i]);
        scanf("%lld",&r[i]);
        scanf("%lld",&s[i]);
    }
    solve(N, M, std::move(l), std::move(r), std::move(s));
    return 0;
}
