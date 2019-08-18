#include <iostream>
#include <vector>
using namespace std;

int main()
{
    short turns, coins;
    int n, total;
    //freopen("input.in", "r", stdin);
    cin >> turns;
    while(turns--)
    {
        cin >> n;
        total = 0;
        coins = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n-1; i++)
        {
            //cout << total << " + " << arr[i] << " < " << arr[i+1] << endl;
            if (total + arr[i] < arr[i+1])
            {
                coins++;
                total += arr[i];
            }
        }

        cout << coins+1 << endl;
    }
}
