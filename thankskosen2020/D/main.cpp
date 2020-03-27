#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

int main()
{
    long long ca, cb, m;
    cin >> ca >> cb >> m;
    if (ca < cb)
    {
        long long temp;
        temp = ca;
        ca = cb;
        cb = temp;
    }

    int m_bits = 0;
    while (m)
    {
        m_bits++;
        m >>= 1;
    }

    long long temp = 1;
    if (ca - m_bits < 0 || cb - m_bits < 0)
    {
        cout << "0" << endl;
        return 0;
    }

    rep(i, cb) { temp *= 2; }
    long long ans = 0;

    return 0;
}
