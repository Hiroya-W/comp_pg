#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, x;
    int ans = 0;
    cin >> n >> x;

    while (!(n == 0 && x == 0))
    {
        ans = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                for (int k = j + 1; k <= n; k++)
                {
                    if (i + j + k == x)
                    {
                        ans++;
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
        cin >> n >> x;
    }

    return 0;
}
