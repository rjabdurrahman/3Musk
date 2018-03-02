#include <iostream>
using namespace std;

int main()
{
    int n, i, c = 0;
    string s;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> s;
        if((s.compare("++X") == 0) || (s.compare("X++") == 0))
            c++;
        else
            c--;
    }
    cout << c << endl;

    return 0;
}
