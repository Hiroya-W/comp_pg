#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

const string YES = "Yes";
const string NO = "No";

bool isPalindrome(string str)
{
    bool ans = false;
    int N = str.length();
    if (N % 2 == 0)
    {
        string str1 = str.substr(0, N / 2);
        string str2 = str.substr(N / 2, N / 2);
        // cout << str1 << endl;
        // cout << str2 << endl;
        reverse(str2.begin(), str2.end());
        if (str1 == str2)
        {
            ans = true;
        }
    }
    else
    {
        string str1 = str.substr(0, (N - 1) / 2);
        string str2 = str.substr((N - 1) / 2 + 1, (N - 1) / 2);
        // cout << str1 << endl;
        // cout << str2 << endl;
        reverse(str2.begin(), str2.end());
        if (str1 == str2)
        {
            ans = true;
        }
    }
    return ans;
}

void solve(std::string S)
{
    int N = S.length();
    string ans = NO;
    if (isPalindrome(S))
    {
        string str1;
        string str2;
        if (N % 2 == 0)
        {
            str1 = S.substr(0, (N / 2));
            str2 = S.substr(N / 2, N / 2);
            // cout << str1 << endl;
            // cout << str2 << endl;
        }
        else
        {
            str1 = S.substr(0, (N - 1) / 2);
            str2 = S.substr((N - 1) / 2 + 1, (N - 1) / 2);
            // cout << str1 << endl;
            // cout << str2 << endl;
        }
        if (isPalindrome(str1))
        {
            if (isPalindrome(str2))
            {
                ans = YES;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
