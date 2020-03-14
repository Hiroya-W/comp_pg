#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    bool S[13] = {false};
    bool H[13] = {false};
    bool C[13] = {false};
    bool D[13] = {false};

    int n;
    cin >> n;
    rep(i, n)
    {
        char c;
        int m;
        cin >> c >> m;
        m--;
        switch (c)
        {
            case 'S':
                S[m] = true;
                break;
            case 'H':
                H[m] = true;
                break;
            case 'C':
                C[m] = true;
                break;
            case 'D':
                D[m] = true;
            default:
                break;
        }
    }

    rep(i, 13) if (!S[i]) cout << "S " << i + 1 << endl;
    rep(i, 13) if (!H[i]) cout << "H " << i + 1 << endl;
    rep(i, 13) if (!C[i]) cout << "C " << i + 1 << endl;
    rep(i, 13) if (!D[i]) cout << "D " << i + 1 << endl;

    return 0;
}
