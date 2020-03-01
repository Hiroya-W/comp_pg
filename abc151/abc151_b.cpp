#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K, M, sum=0, ans;
    cin >> N >> K >> M;

    for (int i = 0; i < N-1; i++)
    {
        int tmp;
        cin >> tmp;
        sum += tmp;
    }

    ans = M * N - sum;
    if (0 <= ans && ans <= K)
        cout << ans << endl;
    else if(ans < 0)
        cout << "0" << endl;
    else if(M < ans)
        cout << "-1" << endl;

    return 0;
}
