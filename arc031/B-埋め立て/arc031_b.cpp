#include <bits/stdc++.h>
using namespace std;

char field[10][10];
char tmp_field[10][10];

void dfs(int i, int j)
{
    if (i < 0 || 10 <= i || j < 0 || 10 <= j)
    {
        return;
    }
    if (tmp_field[i][j] == 'x')
    {
        return;
    }
    tmp_field[i][j] = 'x';

    dfs(i - 1, j);
    dfs(i + 1, j);
    dfs(i, j - 1);
    dfs(i, j + 1);

    return;
}

// 土地を海に沈めて、全部海ならOK
bool check(char map[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (map[i][j] == 'o')
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> field[i][j];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (field[i][j] == 'o')
                continue;
            for (int k = 0; k < 10; k++)
            {
                for (int l = 0; l < 10; l++)
                {
                    tmp_field[k][l] = field[k][l];
                }
            }
            tmp_field[i][j] = 'o';
            dfs(i, j);
            if (check(tmp_field))
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
