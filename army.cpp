#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    long long int n, m;
    while(scanf("%lld%lld", &n, &m) == 2)
    {
        cout << abs(n - m) << endl;
    }
    return 0;
}
