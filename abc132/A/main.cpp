#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

const string YES = "Yes";
const string NO = "No";

void solve(std::string S)
{
    set<char> s;
    rep(i, S.size()) { s.insert(S[i]); }
    if (s.size() == 2)
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
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
