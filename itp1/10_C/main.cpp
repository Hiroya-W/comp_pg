#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;

    while (n != 0)
    {
        double arr[n];
        double sum = 0;
        double m = 0;
        rep(i, n)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        m = sum / n;
        double alpha = 0;
        rep(i, n) { alpha += pow(arr[i] - m, 2); }
        alpha = sqrt(alpha / n);
        printf("%.8lf\n", alpha);

        cin >> n;
    }
}
