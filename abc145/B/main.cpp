#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, std::string S)
{
    if (S.length() % 2 == 1)
    {
        cout << NO << endl;
        return;
    }

    int len = S.length() / 2;
    if (S.substr(0, len) == S.substr(len, len))
    {
        cout << YES << endl;
    }
    else
    {
        cout << NO << endl;
    }
}

int main()
{
    long long N;
    scanf("%lld", &N);
    std::string S;
    std::cin >> S;
    solve(N, S);
    return 0;
}
