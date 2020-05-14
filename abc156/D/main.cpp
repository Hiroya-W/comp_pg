#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

// const long long MOD = 1000000007;

// auto mod int
// https://youtu.be/L8grWxBlIZ4?t=9858
// https://youtu.be/ERZuLAxZffQ?t=4807 : optimize
// https://youtu.be/8uowVvQ_-Mo?t=1329 : division
const int mod = 1000000007;
struct mint
{
    ll x; // typedef long long ll;
    mint(ll x = 0) : x((x % mod + mod) % mod) {}
    mint operator-() const { return mint(-x); }
    mint& operator+=(const mint a)
    {
        if ((x += a.x) >= mod)
            x -= mod;
        return *this;
    }
    mint& operator-=(const mint a)
    {
        if ((x += mod - a.x) >= mod)
            x -= mod;
        return *this;
    }
    mint& operator*=(const mint a)
    {
        (x *= a.x) %= mod;
        return *this;
    }
    mint operator+(const mint a) const { return mint(*this) += a; }
    mint operator-(const mint a) const { return mint(*this) -= a; }
    mint operator*(const mint a) const { return mint(*this) *= a; }
    mint pow(ll t) const
    {
        if (!t)
            return 1;
        mint a = pow(t >> 1);
        a *= a;
        if (t & 1)
            a *= *this;
        return a;
    }

    // for prime mod
    mint inv() const { return pow(mod - 2); }
    mint& operator/=(const mint a) { return *this *= a.inv(); }
    mint operator/(const mint a) const { return mint(*this) /= a; }
};
istream& operator>>(istream& is, const mint& a)
{
    return is >> a.x;
}
ostream& operator<<(ostream& os, const mint& a)
{
    return os << a.x;
}

mint choose(int n, int a)
{
    mint x = 1, y = 1;
    rep(i, a)
    {
        x *= n - i;
        y *= i + 1;
    }
    return x / y;
}

void solve(long long n, long long a, long long b)
{
    mint ans = mint(2).pow(n);
    ans -= 1;
    ans -= choose(n, a);
    ans -= choose(n, b);
    cout << ans.x << endl;
}

int main()
{
    long long n;
    scanf("%lld", &n);
    long long a;
    scanf("%lld", &a);
    long long b;
    scanf("%lld", &b);
    solve(n, a, b);
    return 0;
}
