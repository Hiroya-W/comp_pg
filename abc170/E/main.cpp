#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

typedef long long ll;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n);

    vector<multiset<int>> s(200005);
    multiset<int> maxs;

    auto getMax = [&](int i) {
        if (s[i].size() == 0)
            return -1;
        return *s[i].rbegin();
    };

    auto addYochien = [&](int i) {
        int x = getMax(i);
        if (x == -1)
            return;
        maxs.insert(x);
    };

    auto delYochien = [&](int i) {
        int x = getMax(i);
        if (x == -1)
            return;
        maxs.erase(maxs.find(x));
    };

    auto addEnji = [&](int i, int x) {
        delYochien(i);
        s[i].insert(x);
        addYochien(i);
    };

    auto delEnji = [&](int i, int x) {
        delYochien(i);
        s[i].erase(s[i].find(x));
        addYochien(i);
    };

    rep(i, n)
    {
        cin >> a[i] >> b[i];
        addEnji(b[i], a[i]);
    }
    rep(i, q)
    {
        int c, d;
        cin >> c >> d;
        --c;
        delEnji(b[c], a[c]);
        b[c] = d;
        addEnji(b[c], a[c]);
        int ans = *maxs.begin();
        printf("%d\n", ans);
    }
}
