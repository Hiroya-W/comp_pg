#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

const string YES = "Yes";
const string NO = "No";

void solve(long long H, long long W, std::vector<std::string> s)
{
    string ans = YES;
    rep(i, H)
    {
        rep(j, W)
        {
            if (s[i][j] == '#')
            {

                int count = 0;
                if (0 <= j - 1)
                {
                    if (s[i][j - 1] == '#')
                    {
                        count++;
                    }
                }
                if (W > j + 1)
                {
                    if (s[i][j + 1] == '#')
                    {
                        count++;
                    }
                }
                if (0 <= i - 1)
                {
                    if (s[i - 1][j] == '#')
                    {
                        count++;
                    }
                }
                if (H > i + 1)
                {
                    if (s[i + 1][j] == '#')
                    {
                        count++;
                    }
                }
                if (count == 0)
                {
                    ans = NO;
                }
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    long long H;
    scanf("%lld", &H);
    long long W;
    scanf("%lld", &W);
    std::vector<std::string> s(H);
    for (int i = 0; i < H; i++)
    {
        std::cin >> s[i];
    }
    solve(H, W, std::move(s));
    return 0;
}
