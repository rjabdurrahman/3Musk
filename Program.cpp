#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int m;
    cin >> m;
    cout << m << endl;
    cout << m/100 << " nota(s) de R$ 100,00" << endl;
    cout << (m%100)/50 << " nota(s) de R$ 50,00" << endl;
    cout << ((m%100)%50)/20 << " nota(s) de R$ 20,00" << endl;
    cout << (((m%100)%50)%20)/10 << " nota(s) de R$ 10,00" << endl;
    cout << ((((m%100)%50)%20)%10)/5 << " nota(s) de R$ 5,00" << endl;
    cout << (((((m%100)%50)%20)%10)%5)/2 << " nota(s) de R$ 2,00" << endl;
    cout << (((((m%100)%50)%20)%10)%5)%2 << " nota(s) de R$ 1,00" << endl;

    return 0;
}
