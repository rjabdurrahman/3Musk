#include <iostream>
using namespace std;

void r(int x)
{
    cout << x << endl;
    if(x == 6) return;
    r(x + 1);
}
int main()
{
    r(1);
    return 0;
}
