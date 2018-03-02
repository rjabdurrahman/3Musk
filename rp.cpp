#include <iostream>
using namespace std;
void r(int n)
{
    int x;
    if(n == 0) return;
    cin >> x;
    r(n - 1);
    cout << x << " ";
}
int main()
{
    r(5);

    return 0;
}
