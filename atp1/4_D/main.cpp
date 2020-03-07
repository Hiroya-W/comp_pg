#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    long long int arr[N];
    long long int sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + N);
    printf("%lld %lld %lld\n", arr[0], arr[N - 1], sum);

    return 0;
}
