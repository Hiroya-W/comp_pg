#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

int main()
{
    long long n, a;
    cin >> n >> a;
    long long money = 0;
    long long rank = 1;
    long long max_ans = 0;
    rep(i, n)
    {
        if (money < a)
        {
            money += rank;
            max_ans = money + rank * (n - i - 1);
        }
        else if (money >= a)
        {
            long long next = (money - a) + (rank + 1) * (n - i - 1);
            if (next >= max_ans)
            {
                money -= a;
                rank++;
                max_ans = money + rank * (n - i - 1);
            }
            else
            {
                money += rank;
                max_ans = money + rank * (n - i - 1);
            }
        }
    }
    cout << money << endl;

    return 0;
}
