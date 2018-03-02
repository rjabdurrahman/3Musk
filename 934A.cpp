#include <iostream>

using namespace std;

int main()
{
    int n, m, i, x, bp, p, p1;
    cin >> n >> m;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        if(i == 0)
        {
            p = x;
            bp = x;
        }
        else
        {
            if(x > p)
            {
                bp = p;
                p = x;
            }
        }
    }
    for(i = 0; i < m; i++)
    {
        cin >> x;
        if(i == 0)
        {
            p1 = x;
        }
        else
        {
            p1 = p1 > x ? p1 : x;
        }
    }
    cout << bp*p1 << endl;

    return 0;
}
