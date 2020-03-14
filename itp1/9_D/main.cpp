#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string str;
    int count;
    cin >> str >> count;
    rep(i, count)
    {
        string op;
        cin >> op;
        if (op == "print")
        {
            int start, end;
            cin >> start >> end;
            rep(j, end - start + 1) { cout << str[start + j]; }
            cout << endl;
        }
        else if (op == "replace")
        {
            int start, end;
            string repl;
            cin >> start >> end >> repl;
            rep(j, end - start + 1) { str[start + j] = repl[j]; }
        }
        else if (op == "reverse")
        {
            int start, end;
            cin >> start >> end;
            string repl = str;
            rep(j, end - start + 1) { str[start + j] = repl[end - j]; }
        }
    }
}
