#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

void solve(std::string S)
{
    if (S == "SUN")
    {
        cout << "7" << endl;
    }
    if (S == "MON")
    {
        cout << "6" << endl;
    }
    if (S == "TUE")
    {
        cout << "5" << endl;
    }
    if (S == "WED")
    {
        cout << "4" << endl;
    }
    if (S == "THU")
    {
        cout << "3" << endl;
    }
    if (S == "FRI")
    {
        cout << "2" << endl;
    }
    if (S == "SAT")
    {
        cout << "1" << endl;
    }
}

int main()
{
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
