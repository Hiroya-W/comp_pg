#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<string> split(string str, char del)
{
    int first = 0;
    int last = str.find_first_of(del);

    vector<string> result;

    while (first < str.size())
    {
        string subStr(str, first, last - first);

        result.push_back(subStr);

        first = last + 1;
        last = str.find_first_of(del, first);

        if (last == string::npos)
        {
            last = str.size();
        }
    }

    return result;
}

void solve(long long K)
{
    string str =
      "1,1,1,2,1,2,1,5,2,2,1,5,1,2,1,14,1,5,1,5,2,2,1,"
      "15,2,2,5,4,1,4,1,51";
    char del = ',';

    int count = 0;
    for (const auto sub : split(str, del))
    {
        if (count + 1 == K)
            cout << sub << endl;
        count++;
    }
}
int main()
{
    long long K;
    scanf("%lld", &K);
    solve(K);
    return 0;
}
