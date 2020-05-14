#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef long long ll;

int main()
{
    string s;
    vector<string> v;
    getline(cin, s);
    stringstream ss;
    ss << s;
    while (ss >> s)
    {
        v.push_back(s);
    }

    int n;
    cin >> n;

    rep(i, n)
    {
        string ngword;
        cin >> ngword;
        rep(j, v.size())
        {
            bool chk = true;
            if (ngword.length() != v[j].length())
            {
                continue;
            }
            rep(k, ngword.length())
            {
                if (ngword[k] == '*')
                {
                    continue;
                }
                if (ngword[k] != v[j][k])
                {
                    chk = false;
                }
            }
            if (chk)
            {
                string s = "";
                rep(k, ngword.length()) { s += "*"; }
                v[j] = s;
            }
        }
    }
    rep(i, v.size())
    {
        cout << v[i];
        if (i != v.size() - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
