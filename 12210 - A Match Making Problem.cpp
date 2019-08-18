#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int  b, s, counter =1;
    //freopen("input.in", "r", stdin);
    cin >> b >> s;
    while (b||s)
    {
        short barr[b], sarr[s];
        for (int i = 0; i < b; i++)
        {
            cin >> barr[i];
        }
        for (int i = 0; i < s; i++)
        {
            cin >> sarr[i];
        }
        sort(barr, barr+b);
        if (b <= s)
            printf("Case %d: 0\n", counter);
        else
            printf("Case %d: %d %d\n", counter, b-s, barr[0]);
        cin >> b >> s;
        counter++;
    }
}
