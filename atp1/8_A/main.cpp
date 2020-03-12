#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if ('a' <= c && c <= 'z')
        {
            printf("%c", c - 'a' + 'A');
        }
        else if ('A' <= c && c <= 'Z')
        {
            printf("%c", c - 'A' + 'a');
        }
        else
        {
            printf("%c", c);
        }
    }
    cout << endl;
}
