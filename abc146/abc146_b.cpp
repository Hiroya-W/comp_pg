#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rot;
    string str;
    cin >> rot >> str;

    for (char ptr : str)
    {
        char ch = (ptr - 'A' + rot) % 26 + 'A';
        cout << ch;
    }
    cout << endl;
}
