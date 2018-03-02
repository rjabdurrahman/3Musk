#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int i = 1;
    char s[40];
    while(scanf("%s",s) == 1 && strcmp(s,"*") != 0)
    {
        if(strcmp(s,"Hajj") == 0)
        {
            cout << "Case " << i << ": Hajj-e-Akbar" << endl;
        }
        if(strcmp(s,"Umrah") == 0)
        {
            cout << "Case " << i << ": Hajj-e-Asghar" << endl;
        }
        i++;
    }

    return 0;
}
