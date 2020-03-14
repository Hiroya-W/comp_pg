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
    void rot_hori()
    {
        rot_s();
        rot_w();
        rot_n();
    }
    void rotation(string rot)
    {
        rep(i, rot.length()) { rot_from_char(rot[i]); }
    }
    void rot_from_char(char c)
    {
        if (c == 'N')
            rot_n();
        else if (c == 'E')
            rot_e();
        else if (c == 'S')
            rot_s();
        else if (c == 'W')
            rot_w();
        else if (c == 'H')
            rot_hori();
    }
};

bool sameDice(Dice dice1, Dice dice2)
{
    bool ok = true;
    rep(i, 6)
    {
        if (dice1.d[i] != dice2.d[i])
        {
            ok = false;
        }
    }
    return ok;
}

bool sameDice_search(Dice dice1, Dice dice2)
{
    int n1, n2, n3, n4, n5, n6;
    n1 = dice2.d[0];
    n2 = dice2.d[1];
    n3 = dice2.d[2];
    n4 = dice2.d[3];
    n5 = dice2.d[4];
    n6 = dice2.d[5];

    bool ans = false;

    string chk = "HHHH";
    // 1
    rep(i, chk.length())
    {
        dice2.rot_from_char(chk[i]);
        if (sameDice(dice1, dice2))
        {
            ans = true;
        }
    }

    // 2
    dice2.setter(n1, n2, n3, n4, n5, n6);
    dice2.rot_from_char('N');
    rep(i, chk.length())
    {
        dice2.rot_from_char(chk[i]);
        if (sameDice(dice1, dice2))
        {
            ans = true;
        }
    }
    // 3
    dice2.setter(n1, n2, n3, n4, n5, n6);
    dice2.rot_from_char('W');
    rep(i, chk.length())
    {
        dice2.rot_from_char(chk[i]);
        if (sameDice(dice1, dice2))
        {
            ans = true;
        }
    }
    // 4
    dice2.setter(n1, n2, n3, n4, n5, n6);
    dice2.rot_from_char('E');
    rep(i, chk.length())
    {
        dice2.rot_from_char(chk[i]);
        if (sameDice(dice1, dice2))
        {
            ans = true;
        }
    }
    // 5
    dice2.setter(n1, n2, n3, n4, n5, n6);
    dice2.rot_from_char('S');
    rep(i, chk.length())
    {
        dice2.rot_from_char(chk[i]);
        if (sameDice(dice1, dice2))
        {
            ans = true;
        }
    }
    // 6
    dice2.setter(n1, n2, n3, n4, n5, n6);
    dice2.rotation("SS");
    rep(i, chk.length())
    {
        dice2.rot_from_char(chk[i]);
        if (sameDice(dice1, dice2))
        {
            ans = true;
        }
    }
    return ans;
}

int main()
{
    int num;
    cin >> num;
    Dice dice[num];
    rep(i, num)
    {
        int n1, n2, n3, n4, n5, n6;
        cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
        dice[i].setter(n1, n2, n3, n4, n5, n6);
    }

    bool ans = true;
    rep(i, num - 1)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (sameDice_search(dice[i], dice[j]))
            {
                ans = false;
            }
        }
    }
    puts(ans ? "Yes" : "No");
}
