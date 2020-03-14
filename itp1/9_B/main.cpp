#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string end;
    cin >> end;
    while (!(end == "-"))
    {
        deque<char> d;
        string str = end;
        int count;
        rep(i, str.length()) { d.push_back(str[i]); }
        cin >> count;
        rep(i, count)
        {
            int num;
            cin >> num;
            rep(j, num)
            {
                int temp = d.front();
                d.pop_front();
                d.push_back(temp);
            }
        }
        for (deque<char>::iterator iter = d.begin(); iter != d.end(); iter++)
        {
            cout << *iter;
        }
        cout << endl;
        cin >> end;
    }
}
