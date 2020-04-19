#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(long long N, std::string S)
{
    vector<int> R(N);
    vector<int> G(N);
    vector<int> B(N);
    int rcnt = 0;
    int gcnt = 0;
    int bcnt = 0;
    rep(i, S.length())
    {
        if (S[i] == 'R')
        {
            rcnt++;
            R[i] = rcnt;
            G[i] = gcnt;
            B[i] = bcnt;
        }
        else if (S[i] == 'G')
        {
            gcnt++;
            R[i] = rcnt;
            G[i] = gcnt;
            B[i] = bcnt;
        }
        else if (S[i] == 'B')
        {
            bcnt++;
            R[i] = rcnt;
            G[i] = gcnt;
            B[i] = bcnt;
        }
    }

    ll tot = 0;
    rep(i, S.length())
    {
        int dis = 0;
        char c1 = S[i];
        char c2 = 0, c3 = 0;
        for (int j = i + 1; j < S.length(); j++)
        {
            if (c1 != S[j])
            {
                c2 = S[j];
                dis = j - i;

                if (c1 != 'R' && c2 != 'R')
                {
                    tot += R.back() - R[j];
                    if (j + dis < N && S[j + dis] == 'R')
                        tot--;
                }
                else if (c1 != 'G' && c2 != 'G')
                {
                    tot += G.back() - G[j];
                    if (j + dis < N && S[j + dis] == 'G')
                        tot--;
                }
                else
                {
                    tot += B.back() - B[j];
                    if (j + dis < N && S[j + dis] == 'B')
                        tot--;
                }
            }
        }
        if (c2 == 0)
        {
            break;
        }
    }
    cout << tot << endl;
}

int main()
{
    long long N;
    scanf("%lld", &N);
    std::string S;
    std::cin >> S;
    solve(N, S);
    return 0;
}
