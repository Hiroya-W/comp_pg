#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool include3(int x)
{
    if (x == 0)
        return false;

    if (x % 10 == 3)
        return true;
    else
        return include3(x / 10);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
            cout << " " << i;
        else if (include3(i))
            cout << " " << i;
    }
    cout << endl;

    return 0;
}
