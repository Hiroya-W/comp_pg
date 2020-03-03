#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string ans = "APPROVED";

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int num = 0;
        cin >> num;

        if (num % 2 == 0)
        {
            if (!(num % 3 == 0 || num % 5 == 0))
            {
                ans = "DENIED";
            }
        }
    }

    cout << ans << endl;
}
