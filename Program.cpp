#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int s;
    cin >> s;
    cout << s/3600 << ":";
    cout << (s%3600)/60 << ":";
    cout << (s%3600)%60 << endl;

    return 0;
}
