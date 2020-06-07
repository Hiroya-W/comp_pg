#include <bits/stdc++.h>
#include <math.h>

#include <cmath>
#include <cstdio>
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
    int A, B, H, M;
    cin >> A >> B >> H >> M;
    double l = (H / 12.0 + M / 60.0 / 12.0) * 2 * M_PI;
    double s = M / 60.0 * 2 * M_PI;
    double theta = abs(l - s);
    theta = min(2 * M_PI - theta, theta);
    double ans = A * A + B * B - 2 * A * B * cos(theta);
    printf("%.20lf\n", sqrt(ans));
    return 0;
}
