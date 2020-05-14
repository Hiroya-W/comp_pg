#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int m, f, r;
    cin >> m >> f >> r;
    while (!(m == -1 && f == -1 && r == -1))
    {
        if (m == -1 || f == -1)
        {
            cout << "F" << endl;
            cin >> m >> f >> r;
            continue;
        }

        if (m + f >= 80)
            cout << "A" << endl;
        else if (m + f >= 65)
            cout << "B" << endl;
        else if (m + f >= 50)
            cout << "C" << endl;
        else if (m + f >= 30)
        {
            if (r >= 50)
            {
                cout << "C" << endl;
            }
            else
            {
                cout << "D" << endl;
            }
        }
        else
        {
            cout << "F" << endl;
        }

        cin >> m >> f >> r;
    }

    return 0;
}
