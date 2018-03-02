#include <iostream>
using namespace std;
int main()
{
    short n,k,x,c=0,t;
    cin >> n >> k;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        if(i < k && x > 0)
        {
            c++;
        }
        else if(i == k)
        {
            t = x;
            if(x > 0)
                c++;
        }
        else if(i > k && x == t && x > 0)
        {
            c++;
        }
    }
    cout << c << endl;

    return 0;
}

