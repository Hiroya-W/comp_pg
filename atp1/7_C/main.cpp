#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r + 1][c + 1] = {};
    rep(i, r)
    {
        rep(j, c)
        {
            cin >> arr[i][j];
            arr[i][c] += arr[i][j];
        }
    }

    rep(i, r)
    {
        rep(j, c + 1) { printf("%d%s", arr[i][j], j == c ? "" : " "); }
        cout << endl;
    }

    rep(i, c + 1)
    {
        int sum = 0;
        rep(j, r) { sum += arr[j][i]; }
        printf("%d%s", sum, i == c ? "" : " ");
    }
    cout << endl;

    return 0;
}
