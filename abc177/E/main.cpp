#include <bits/stdc++.h>

#include <vector>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)

typedef long long ll;

const int MAX_A = 1000005;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> C(MAX_A);
    rep(i, N) {
        cin >> A[i];
        C[A[i]]++;  // A[i]の個数
    }

    bool pairwise = true;
    for (int i = 2; i < MAX_A; i++) {  // 素因数(以外も含むが)に対して
        int cnt = 0;
        for (int j = i; j < MAX_A; j += i) {  // その素因数の倍数に対して
            cnt += C[j];                      // その素因数の倍数がA[i]に何個含まれているか数える
        }
        // 1個ならその素因数で割る事が出来るペアはない
        // 2個以上ならその素因数で割る事が出来るペアがある GCD(i,j) > 1となるi,jがある
        if (cnt > 1) {
            pairwise = false;
        }
    }
    if (pairwise) {
        cout << "pairwise coprime" << endl;
        return 0;
    }

    int g = 0;  // GCD(0,i) == iになるので、初期値は0にしておくと良い
    rep(i, N) {
        g = gcd(g, A[i]);
    }
    if (g == 1) {
        cout << "setwise coprime" << endl;
        return 0;
    }

    cout << "not coprime" << endl;
    return 0;
}
