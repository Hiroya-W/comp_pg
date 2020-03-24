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
    long long T;
    scanf("%lld", &T);

    long long sum = 0;

    std::vector<long long> t(N);
    cin >> t[0];
    for (int i = 1; i < N; i++)
    {
        scanf("%lld", &t[i]);
        if (t[i] - t[i - 1] >= T)
        {
            sum += T;
        }
        else
        {
            sum += t[i] - t[i - 1];
        }
    }
    sum += T;
    cout << sum << endl;
    return 0;
}
