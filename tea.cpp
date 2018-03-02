#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t, x, i, c = 0;
    while(scanf("%d",&t)!= EOF)
    {
        for(i = 0; i < 5; i++)
        {
            cin >> x;
            if(x == t)
                c++;
        }
        cout << c << endl;
        c = 0;
    }

    return 0;
}
