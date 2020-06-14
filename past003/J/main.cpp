#include <bits/stdc++.h>

#include <cctype>
#include <list>
#include <utility>
#include <vector>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

typedef long long ll;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> eat(M);
    fill(eat.begin(), eat.end(), -1);
    list<pair<int, ll>> sushi(M);

    rep(i, M) {
        ll a;
        cin >> a;
        sushi.push_back(make_pair(i, a));
    }

    rep(i, N) {
        ll maxA = 0;
        for (auto itr = sushi.begin(); itr != sushi.end();) {
            if (maxA < (*itr).second) {
                maxA = (*itr).second;
                eat[(*itr).first] = i;
                auto iitr = itr;
                itr++;
                sushi.erase(iitr);
            } else {
                itr++;
            }
        }
    }

    rep(i, M) {
        if (eat[i] == -1) {
            cout << "-1" << endl;
        } else {
            cout << eat[i] + 1 << endl;
        }
    }

    return 0;
}
