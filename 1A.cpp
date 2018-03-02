#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    double m, n, a;
    cin >> m >> n >> a;
    printf("%.0lf",ceil(m/a)*ceil(n/a));

    return 0;
}

