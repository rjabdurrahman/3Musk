#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s,ts;
    int l,j = 0;
    cin >> s;
    l = s.length();
    for(int i = 0; i < l; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'y' || s[i] == 'Y')
            continue;
        else
        {
            ts.append(1u, '.');
            if(s[i] >= 65 && s[i] <= 90)
                ts.append(1u, (s[i]+32));
            else
                ts.append(1u, s[i]);
        }
    }
    s = ts;
    cout << s << endl;

    return 0;
}
