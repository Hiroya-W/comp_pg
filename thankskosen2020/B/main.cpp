#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int grade = 1;
    bool ryunen = false;
    bool yasumi = false;

    rep(i, s.length())
    {
        char c = s[i];
        if (c == 'S')
        {
            ryunen = false;
            yasumi = false;
            grade++;
        }
        if (c == 'R')
        {
            // 既に留年してたら
            if (ryunen)
            {
                cout << "No" << endl;
                return 0;
            }
            ryunen = true;
        }
        if (c == 'K')
        {
            if (yasumi)
            {
                cout << "No" << endl;
                return 0;
            }
            yasumi = true;
        }
    }
    if (grade >= 6)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
