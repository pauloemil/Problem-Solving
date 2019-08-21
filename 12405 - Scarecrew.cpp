#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int turns, flags, n, temp, i;
    string item;
    //freopen("input.in", "r", stdin);
    cin >> turns;
    temp = turns;
    while(turns--)
    {
            cin >> n;
            cin >> item;
            flags = 0;
            i = 0;
            while (i <= n)
            {
                if (item[i] == '.')
                {
                    flags ++;
                    i+=2;

                }
                i++;
            }
            cout << "Case "<< temp - turns << ": " << flags << endl;
    }
}


