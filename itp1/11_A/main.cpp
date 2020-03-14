#include <bits/stdc++.h>
using namespace std;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

struct Dice
{
    int d[6];
    void setter(int n1, int n2, int n3, int n4, int n5, int n6)
    {
        d[0] = n1;
        d[1] = n2;
        d[2] = n3;
        d[3] = n4;
        d[4] = n5;
        d[5] = n6;
    }

    void rot_n() { setter(d[1], d[5], d[2], d[3], d[0], d[4]); }
    void rot_e() { setter(d[3], d[1], d[0], d[5], d[4], d[2]); }
    void rot_s() { setter(d[4], d[0], d[2], d[3], d[5], d[1]); }
    void rot_w() { setter(d[2], d[1], d[5], d[0], d[4], d[3]); }
};

int main()
{
    Dice dice;
    int n1, n2, n3, n4, n5, n6;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
    dice.setter(n1, n2, n3, n4, n5, n6);

    string rot;
    cin >> rot;
    rep(i, rot.length())
    {
        if (rot[i] == 'N')
            dice.rot_n();
        else if (rot[i] == 'E')
            dice.rot_e();
        else if (rot[i] == 'S')
            dice.rot_s();
        else if (rot[i] == 'W')
            dice.rot_w();
    }
    cout << dice.d[0] << endl;
}
