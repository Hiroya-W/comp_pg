#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int a, b;
    cin >> a >> b;
    while (a != 0 && b != 0)
    {
        rep(i, a)
        {
            rep(j, b) { cout << "#"; }
            cout << endl;
        }
        cout << endl;
        cin >> a >> b;
    }

    return 0;
}
