#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int t, n, i, cc = 1, b = 0, w = 0, tt = 0, a = 0;
    char c;
    while(scanf("%d",&t) != EOF)
    {
        for(int j = 1; j <= t; j++)
        {
            cin >> n;
            for(i = 1; i <= n; i++)
            {
                cin >> c;
                if(c == 'B')
                    b++;
                else if(c == 'W')
                    w++;
                else if(c == 'T')
                    tt++;
                else if(c == 'A')
                    a++;
            }
            if(b > 0 && w == 0)
                cout << "Case " << cc << ": BANGLAWASH";
            else if(w > 0 && b == 0)
                cout << "Case " << cc << ": WHITEWASH";
            else if(a == n)
                cout << "Case " << cc << ": ABANDONED";
            else if(b > w)
                cout << "Case " << cc << ": BANGLADESH " << b << " - " << w;
            else if(b < w)
                cout << "Case " << cc << ": WWW " << w << " - " << b;
            else if(b == w)
                cout << "Case " << cc << ": DRAW " << b << " " << w;
            cout << " ";
            b = 0;
            w = 0;
            tt = 0;
            a = 0;
            cc++;
        }
        cc = 1;
    }
}
