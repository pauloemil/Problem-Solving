#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, b, d, kamMra = 0;
    cin >> n >> b >> d;
    int item;
    long long totalJuice = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> item;
        if (item <= b)
        {
            totalJuice += item;
        }
        if (totalJuice > d)
        {
            kamMra++;
            totalJuice = 0;
        }
    }
    cout << kamMra;


}
// after mo3anah la b2s beha :"
