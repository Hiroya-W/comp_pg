// ナップサック問題

#include <bits/stdc++.h>

#include <cstdio>
using namespace std;

#define MAX_N 100
#define MAX_W 100

int dp[MAX_N + 1][MAX_W + 1];  // DPテーブルは+1サイズで用意しておく
int w[MAX_N];
int v[MAX_N];
int n = 10;
int W = 10;

void solve() {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= W; j++) {
            // 詰め込める荷物の重さはj
            // 詰め込みたい重さはw[i]
            if (j < w[i]) {
                // 回収せずに次のアイテムを考慮する i -> i+1
                // j -> j
                dp[i][j] = dp[i + 1][j];
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]);
            }
        }
    }
    // 解は、0番目以降のアイテムについて考慮し、
    // 荷物の上限がWだった時の最大値がほしいので
    printf("%d\n", dp[0][W]);
}

void solve1() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= W; j++) {
            if (j < w[i]) {
                dp[i + 1][j] = dp[i][j];
            } else {
                dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
            }
        }
    }
    printf("%d\n", dp[n][W]);
}
