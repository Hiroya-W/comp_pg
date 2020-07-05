#include <bits/stdc++.h>

#include <cstdio>
#include <map>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

typedef long long ll;

int main() {
    map<string, int> cnt;
    int N;
    cin >> N;
    rep(i, N) {
        string S;
        cin >> S;
        cnt[S]++;
    }
    printf("AC x %d\n", cnt["AC"]);
    printf("WA x %d\n", cnt["WA"]);
    printf("TLE x %d\n", cnt["TLE"]);
    printf("RE x %d\n", cnt["RE"]);
    return 0;
}
