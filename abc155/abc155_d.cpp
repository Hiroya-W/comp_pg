#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
// #define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

const ll INF = ll(1e18) + 1;

int main()
{
    ll n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());

    ll left = -INF, right = INF;
    while (left + 1 < right)
    {
        ll mid = (left + right) / 2;
        ll total = 0;

        rep(i, n)
        {
            if (a[i] < 0)
            {
                int l = -1, r = n;
                while (l + 1 < r)
                {
                    int c = (l + r) / 2;
                    if (a[i] * a[c] < mid)
                        r = c;
                    else
                        l = c;
                }
                total += n - r;
            }
            else
            {
                int l = -1, r = n;
                while (l + 1 < r)
                {
                    int c = (l + r) / 2;
                    if (a[i] * a[c] < mid)
                        l = c;
                    else
                        r = c;
                }
                total += r;
            }
            if (a[i] * a[i] < mid)
                total--;
        }
        total /= 2;
        if (total < k)
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }

    cout << left << endl;
    return 0;
}
