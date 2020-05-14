#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string str;
    cin >> str;
    list<char> li;
    for (char c : str)
    {
        li.push_back(c);
    }
    int Q;
    cin >> Q;
    bool ref = false;
    rep(i, Q)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            ref = !ref;
            // reverse(li.begin(), li.end());
        }
        else if (op == 2)
        {
            int f;
            char c;
            cin >> f >> c;
            if (f == 1)
            {
                if (!ref)
                    li.push_front(c);
                else
                    li.push_back(c);
            }
            else if (f == 2)
            {
                if (!ref)
                    li.push_back(c);
                else
                    li.push_front(c);
            }
        }
    }
    if (!ref)
    {
        for (auto p = li.begin(); p != li.end(); p++)
        {
            cout << *p;
        }
    }
    else
    {
        for (auto p = li.rbegin(); p != li.rend(); p++)
        {
            cout << *p;
        }
    }

    cout << endl;
    return 0;
}
