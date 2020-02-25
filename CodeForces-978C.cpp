#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    long long as[n];

    for (int i = 0; i < n; i ++)
    {
        cin >> as[i];
    }

    int dromo = 0;
    long long last = 0;


    for (int i = 0; i < m; i ++)
    {
        long long x;
        cin >> x;
        while (x > as[dromo]+last)
        {
            last += as[dromo++];
            //cout << (dromo+1) << " " << (x-last) << endl;
        }
        cout << (dromo+1) << " " << x-last << endl;

    }


}
