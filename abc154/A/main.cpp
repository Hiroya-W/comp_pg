#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(std::string S, std::string T, long long A, long long B,
           std::string U)
{
    if (U == S)
    {
        A--;
    }
    else
    {
        B--;
    }
    cout << A << " " << B << endl;
}

int main()
{
    std::string S;
    std::cin >> S;
    std::string T;
    std::cin >> T;
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    std::string U;
    std::cin >> U;
    solve(S, T, A, B, U);
    return 0;
}
