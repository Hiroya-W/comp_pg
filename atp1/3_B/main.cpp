#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10000] = {0};
    for (int i = 0; i < 10000; i++)
    {
        int num;
        cin >> num;
        if (num == 0)
            return 0;
        printf("Case %d: %d\n", i + 1, num);
    }
}
