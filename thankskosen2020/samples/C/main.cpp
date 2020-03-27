#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int Taro = 0;
    int Jiro = 0;
    rep(i, n)
    {
        int temp;
        cin >> temp;
        Taro += temp * (i + 1);
    }
    rep(i, n)
    {
        int temp;
        cin >> temp;
        Jiro += temp * (i + 1);
    }
    if (Taro == Jiro)
    {
        cout << "Even" << endl;
    }
    else if (Taro > Jiro)
    {
        cout << "Taro" << endl;
    }
    else
    {
        cout << "Jiro" << endl;
    }
    return 0;
}
