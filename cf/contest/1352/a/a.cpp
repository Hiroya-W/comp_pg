#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

int main() {
    int N;
    cin >> N;
    rep(i, N) {
        int num;
        cin >> num;
        int cnt = 0;
        int keta = 1;
        vector<int> ans;
        while (num != 0) {
            int mod = num % 10;
            if (mod != 0) {
                cnt++;
                ans.push_back(mod * keta);
            }
            keta *= 10;
            num /= 10;
        }
        cout << cnt << endl;
        rep(j, ans.size()) {
            printf("%d%s", ans[j], j == ans.size() - 1 ? "\n" : " ");
        }
    }
    return 0;
}
