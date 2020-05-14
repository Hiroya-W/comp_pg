#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

int main()
{
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    long long A[200000] = {};
    long long kind = 0;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        if (A[num] == 0)
        {
            kind++;
        }
        A[num]++;
    }
    vector<ll> ball;
    rep(i, 200000)
    {
        if (A[i] != 0)
        {
            ball.push_back(A[i]);
        }
    }
    sort(ball.begin(), ball.end());
    if (kind > K)
    {
        int ans = 0;
        rep(i, kind - K) { ans += ball[i]; }
        cout << ans << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}
