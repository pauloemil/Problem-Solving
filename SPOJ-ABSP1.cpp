#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int whole, item, x;
    cin >> whole;
    for(int w = 0; w < whole; w++)
    {

        cin >> item;
        long long arr[item];
        long long accu[item];

        for(int i = 0; i < item; i++)
        {
            cin >> arr[i];
            accu[item-1-i] = arr[i];
        }
        for(int i = 0; i < item-1; i++)
        {
            accu[i+1] += accu[i];
        }
        /*for(int i = 0; i < item; i++)
        {
            cout << accu[i] << " ";
        }
        cout << endl;*/
        long long total = 0;
        int counter = item;
        for(int i = 0; i < item-1; i++)
        {
            total += abs((--counter)*arr[i] - accu[item-2-i]);
            //cout << "test  " << (counter)*arr[i] << " " << accu[item-2-i] <<endl;
        }
        //total += arr[item-1];
        cout << total << endl;


    }
}
