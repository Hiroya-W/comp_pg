#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num[3] = {0};
    string ans = "No";

    for (int i = 0; i < 3; i++)
    {
        cin >> num[i];
    }

    sort(num, num + 3);

    if (num[0] == num[1])
    {
        if (num[1] == num[2])
            ans = "No";
        else
            ans = "Yes";
    }
    else if (num[1] == num[2])
    {
        ans = "Yes";
    }

    cout << ans << endl;
}
