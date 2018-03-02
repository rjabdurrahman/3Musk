#include <iostream>
using namespace std;
int main()
{
    int n, k, i, x, c = 0, t;
    cin >> n >> k;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        if(i < k && x > 0)
            c++;
        else if(i == k)
        {
            t == x;
            if(x > 0)
                c++;
        }
        else if(i > k && x > 0 && x == t)
            c++;
    }
    cout << c << endl;

    return 0;
}
