#include <bits/stdc++.h>

#include <cctype>
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
    int N;
    cin >> N;
    // - a -
    // b c d
    // + e +
    // f   g
    // - h -
    // abcdefgh の8bit
    vector<int> seg(N);

    // 1行目
    string s;
    cin >> s;
    rep(i, N) {
        if (s[4 * i + 2] == '#') {
            seg[i] += 1 << 7;
        }
    }
    // 2行目
    cin >> s;
    rep(i, N) {
        if (s[4 * i + 1] == '#') {
            seg[i] += 1 << 6;
        }

        if (s[4 * i + 2] == '#') {
            seg[i] += 1 << 5;
        }

        if (s[4 * i + 3] == '#') {
            seg[i] += 1 << 4;
        }
    }

    // 3行目
    cin >> s;
    rep(i, N) {
        if (s[4 * i + 2] == '#') {
            seg[i] += 1 << 3;
        }
    }

    // 4行目
    cin >> s;
    rep(i, N) {
        if (s[4 * i + 1] == '#') {
            seg[i] += 1 << 2;
        }

        if (s[4 * i + 3] == '#') {
            seg[i] += 1 << 1;
        }
    }

    // 5行目
    cin >> s;
    rep(i, N) {
        if (s[4 * i + 2] == '#') {
            seg[i] += 1;
        }
    }

    rep(i, N) {
        if (seg[i] == 0b11010111) {
            cout << "0";
        } else if (seg[i] & 0b00100000) {
            cout << "1";
        } else if (seg[i] == 0b10011101) {
            cout << "2";
        } else if (seg[i] == 0b10011011) {
            cout << "3";
        } else if (seg[i] == 0b01011010) {
            cout << "4";
        } else if (seg[i] == 0b11001011) {
            cout << "5";
        } else if (seg[i] == 0b11001111) {
            cout << "6";
        } else if (seg[i] == 0b10010010) {
            cout << "7";
        } else if (seg[i] == 0b11011111) {
            cout << "8";
        } else if (seg[i] == 0b11011011) {
            cout << "9";
        }
    }
    cout << endl;

    return 0;
}
