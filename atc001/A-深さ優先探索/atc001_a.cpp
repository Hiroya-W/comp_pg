// http://zigzackey.hatenablog.com/entry/2016/12/01/223330
#include <bits/stdc++.h>
using namespace std;

const int MAX_H = 500;
const int MAX_W = 500;

int W, H;
char maze[MAX_W][MAX_H];
bool reached[MAX_W][MAX_H] = {false};

void search(int x, int y)
{
    if (x < 0 || W <= x || y < 0 || H <= y)
        return;

    if (maze[y][x] == '#')
        return;

    if (reached[y][x])
        return;

    reached[y][x] = true;
    search(x + 1, y);
    search(x - 1, y);
    search(x, y + 1);
    search(x, y - 1);
}

int main()
{
    int sX, sY;
    int gX, gY;
    cin >> H >> W;

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> maze[i][j];
            if (maze[i][j] == 's')
            {
                sX = j;
                sY = i;
            }
            if (maze[i][j] == 'g')
            {
                gX = j;
                gY = i;
            }
        }
    }
    search(sX, sY);

    if (reached[gY][gX])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
