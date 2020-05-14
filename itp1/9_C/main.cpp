#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int count;
    int anstaro = 0;
    int anshana = 0;

    cin >> count;
    rep(i, count)
    {
        string taro;
        string hanako;
        cin >> taro >> hanako;
        if (taro == hanako)
        {
            anstaro++;
            anshana++;
        }
        else if (taro > hanako)
        {
            anstaro += 3;
        }
        else if (taro < hanako)
        {
            anshana += 3;
        }
    }
    cout << anstaro << " " << anshana << endl;
}
