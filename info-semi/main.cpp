#include <math.h>
#include <iostream>
#include <map>
#include <vector>

#define KEYLEN 5

using namespace std;

void decrypt();
void toukei();
void alpha();

int main()
{
    // alpha();
    // toukei();
    decrypt();
    return 0;
}

void decrypt()
{
    string str;
    cin >> str;
    // string key = "PVLIM";
    string key;
    cin >> key;
    cout << str << endl;
    for (int i = 0; i < str.size(); i++)
    {
        // ずらす数
        int shift = key[i % KEYLEN] - 'A';
        // 復号
        int c = str[i] - 'A';
        // c = (c + shift) % 26 + 'A';
        c = (c - shift);
        if (c < 0)
        {
            c += 26;
        }
        c += 'A';
        printf("%c%s", (char)c,
               (i + 1) % 50 == 0 ? "\n" : (i % 5 == 4 ? " " : ""));
    }
    cout << endl;
}

void toukei()
{
    string str;
    vector<vector<int>> hist(KEYLEN, vector<int>(26));
    cin >> str;
    cout << str << endl;
    // KEYLEN文字区切りで統計を取ってみる
    // 各文字目の出現回数を調べる
    for (int i = 0; i < str.size(); i++)
    {
        int j = i % KEYLEN;
        hist[j][str[i] - 'A']++;
    }
    // 統計の表示
    for (int moji = 0; moji < KEYLEN; moji++)
    {
        printf("%d文字目の統計\n", moji + 1);
        for (int i = 0; i < 26; i++)
        {
            printf("%c %3d :", 'A' + i, hist[moji][i]);
            for (int cnt = 0; cnt < hist[moji][i]; cnt++)
            {
                printf("*");
            }
            cout << endl;
        }
    }
}

void alpha()
{
    vector<double> hist = {6.42, 1.27, 2.18, 3.17, 10.31, 2.08, 1.52,
                           4.67, 5.75, 0.08, 0.49, 3.21,  1.98, 5.73,
                           6.32, 1.52, 0.08, 4.84, 5.14,  7.96, 2.28,
                           0.83, 1.75, 0.13, 1.64, 0.05};

    for (int i = 0; i < 26; i++)
    {
        int h = floor(2 * hist[i]);
        printf("%c %3d :", 'A' + i, h);
        for (int cnt = 0; cnt < h; cnt++)
        {
            printf("*");
        }
        cout << endl;
    }
}
