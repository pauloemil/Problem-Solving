#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int as[n];
    int perfectBucket = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> as[i];
        if ( k % as[i] == 0 && as[i] > perfectBucket)
            perfectBucket = as[i];

    }
    if (perfectBucket != 0)
        cout << k / perfectBucket;
    else
        cout << 1;



}
