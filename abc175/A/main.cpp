#include <bits/stdc++.h>

#include <iostream>
#include <shared_mutex>
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
    string S;
    cin >> S;

    if (S == "SSS") {
        cout << "0" << endl;
    } else if (S == "SSR") {
        cout << "1" << endl;
    } else if (S == "SRS") {
        cout << "1" << endl;
    } else if (S == "SRR") {
        cout << "2" << endl;
    } else if (S == "RSS") {
        cout << "1" << endl;
    } else if (S == "RSR") {
        cout << "1" << endl;
    } else if (S == "RRS") {
        cout << "2" << endl;
    } else if (S == "RRR") {
        cout << "3" << endl;
    }
    return 0;
}
