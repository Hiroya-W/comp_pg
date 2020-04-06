#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long X, long long Y, long long Z)
{
    cout << Z << " " << X << " " << Y << endl;
    if(X < Y )
    {
        cout<<"YES"<<endl;
    }
}

int main()
{
    long long X;
    scanf("%lld", &X);
    long long Y;
    scanf("%lld", &Y);
    long long Z;
    scanf("%lld", &Z);
    solve(X, Y, Z);
    return 0;
}
