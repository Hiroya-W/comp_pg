#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3000][2] = {0};

    for (int i = 0; i < 3000; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0)
            break;

        arr[i][0] = x;
        arr[i][1] = y;
    }

    for (int i = 0; i < 3000; i++)
    {
        int x, y;
        x = arr[i][0];
        y = arr[i][1];

        if (x == 0 && y == 0)
            return 0;
        else if (x <= y)
            printf("%d %d\n", x, y);
        else
            printf("%d %d\n", y, x);
    }
}
