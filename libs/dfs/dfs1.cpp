#include <bits/stdc++.h>
using namespace std;

#define MAX_N 100

// 入力
int a[MAX_N];
int n, k;

bool dfs(int i, int sum) {
    // n個それぞれを使うor使わないを選択した時、
    // その時の和がkと等しいかを返す
    if (i == n) return sum == k;

    // a[i]を使わない時
    if (dfs(i + 1, sum)) return true;

    // a[i]を使う時
    if (dfs(i + 1, sum + a[i])) return true;

    // ここに来た時は、
    // a[i]を使うor使わないに拘らずsum==kとはなれない
    // のでfalseを返す
    return false;
}

int main() {
    if (dfs(0, 0))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
