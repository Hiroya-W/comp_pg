#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    if (n - m >= k)
    {
        cout << "Yes!" << endl;
    }
    else
    {
        cout << "No..." << endl;
    }
    return 0;
}
