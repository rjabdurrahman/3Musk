#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n, x, y, i;
    while(scanf("%d",&n) != EOF)
    {
        for(i = 1; i <= n; i++)
        {
            cin >> x >> y;
            if(x%2 == 0)
                x = x + 1;
            if(y%2 == 0)
                y = y - 1;
            cout << "Case " << i << ": " << (y + x)*((y - x)/4.0 + .5) << endl;
        }
    }
    return 0;
}
