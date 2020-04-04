#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

bool isLunlun(long long num)
{
    long long temp1 = num % 10;
    num /= 10;
    while (num != 0)
    {
        long long temp2 = num % 10;
        if (abs(temp1 - temp2) > 1)
        {
            return false;
        }
        temp1 = temp2;
        num /= 10;
    }
    return true;
}

void solve(long long K)
{
    long long count = 0;
    long long temp = 1;
    while (count != K)
    {
        // tempがlunlunかチェックする
        long long temp1 = temp;
        long long mod = temp1 % 10;
        temp1 /= 10;
        int keta = 1;
        bool chk = true;
        while (temp1 != 0)
        {
            long long mod2 = temp1 % 10;
            if (abs(mod - mod2) <= 1)
            {
                temp1 /= 10;
                mod = mod2;
                keta++;
            }
            else
            {
                chk = false;
                break;
            }
        }
        if (chk)
        {
            count++;
            if (count == K)
            {
                cout << temp << endl;
                return;
            }
            temp++;
        }
        else
        {
            if (temp1 % 10 == 9)
            {
                temp = temp1 * 10 * keta;
            }
            else
            {
                temp = temp1 * 10 * keta + 10 * keta;
            }
            int mod = temp1 + 1;
            while (keta > 0)
            {
                keta--;
                mod = mod - 1 >= 0 ? mod - 1 : 0;
                temp += pow(10, keta) * mod;
            }
        }
    }
}

int main()
{
    long long K;
    scanf("%lld", &K);
    solve(K);
    return 0;
}
