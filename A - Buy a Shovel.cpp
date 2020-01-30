#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    int money = k;
    int counter = 1;
    while(money % 10 != r && money % 10 != 0)
    {
        money += k;
        counter++;
    }
    cout << counter;
}
