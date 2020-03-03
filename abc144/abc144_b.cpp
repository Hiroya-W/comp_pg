#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string ans = "No";
    cin >> N;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0;  j < 10;  j++)
        {
            if (i * j == N)
                ans = "Yes";
        }
        }

    cout << ans << endl;
}
