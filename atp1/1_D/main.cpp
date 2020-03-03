#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Time;
    cin >> Time;
    int hour = floor(Time / 3600);
    int min = floor(Time % 3600 / 60);
    int sec = (Time % 60);

    cout << hour << ":" << min << ":" << sec << endl;
    return 0;
}
