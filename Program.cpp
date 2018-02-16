#include <iostream>
using namespace std;
int main()
{
    int n, x, c = 0, p = 0;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> x;
        if(x == -1 && p == 0)
        {
            c++;
            continue;
        }
        if(x > 0)
        {
            p += x;
            continue;
        }
        if(x == -1 && p > 0)
        {
            p--;
        }
    }
    cout << c << endl;

    return 0;
}
