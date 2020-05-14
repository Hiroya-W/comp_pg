#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

const string YES = "YES";
const string NO = "NO";

void solve(std::string X)
{
    rep(i, X.length())
    {
        char c = X[i];
        switch (c)
        {
            case 'c':
            {
                char d = X[i + 1];
                if (d != 'h')
                {
                    cout << NO << endl;
                    return;
                }
                else
                {
                    i++;
                }
                break;
            }
            case 'o':
                break;
            case 'k':
                break;
            case 'u':
                break;
            default:
                cout << NO << endl;
                return;
        }
    }
    cout << YES << endl;
}

int main()
{
    std::string X;
    std::cin >> X;
    solve(X);
    return 0;
}
