#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

int main()
{
    int n, m;
    cin >> n >> m;
    priority_queue<int> q;
    rep(i, n)
    {
        int a;
        cin >> a;
        q.push(a);
    }
    rep(i, m)
    {
        int a = q.top();
        q.pop();
        q.push(a / 2);
    }
    ll ans = 0;
    rep(i, n)
    {
        ans += q.top();
        q.pop();
    }
    cout << ans << endl;
    return 0;
}
