#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;


void solve(long long N, long long M, std::vector<long long> s, std::vector<long long> t){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> s(M);
    std::vector<long long> t(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&s[i]);
        scanf("%lld",&t[i]);
    }
    solve(N, M, std::move(s), std::move(t));
    return 0;
}
