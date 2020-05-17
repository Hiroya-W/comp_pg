#include <bits/stdc++.h>

#include <algorithm>
#include <cctype>
#include <ios>
#include <set>
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
    string s;
    cin >> s;
    int l = 0;
    vector<string> str;
    for (int i = 1; i < s.size(); i++) {
        if ('A' <= s[i] && s[i] <= 'Z') {
            string sub = s.substr(l, i - l + 1);
            transform(sub.begin(), sub.end(), sub.begin(), ::tolower);
            str.push_back(sub);
            i++;
            l = i;
        }
    }
    sort(str.begin(), str.end());
    for (string S : str) {
        S[0] = toupper(S[0]);
        S[S.size() - 1] = toupper(S[S.size() - 1]);
        cout << S;
    }
    cout << endl;
    return 0;
}
