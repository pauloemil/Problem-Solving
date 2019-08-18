#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //freopen("input.in", "r", stdin);
    int n, d, r, item;
    cin >> n >> d >> r;
    while (n||d||r)
    {
        int morning[n], evening[n], total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> morning[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> evening[i];
        }
        sort(morning, morning + n);
        sort(evening, evening + n);
        for (int i = 0; i < n; i++)
        {
            int x = morning[i] + evening[(n-1)-i];
            if (x > d)
                total += (x - d) * r;
        }
        cout << total << endl;
        cin >> n >> d >> r;
    }
}
