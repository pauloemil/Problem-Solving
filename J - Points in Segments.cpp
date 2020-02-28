#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    //freopen("input.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    bool arr[m] = {0};
    int l, r;
    for(int i = 0; i < n; i++)
    {
        cin >> l >> r;
        for(int j = l-1; j < r; j++)
            {
                arr[j] = 1;
                //cout << j+1 <<endl;;
            }
    }
    vector<int> vec;
    for(int i = 0; i < m; i++)
    {
        //cout << i+1 << " " << arr[i] << endl;
        if(arr[i] == 0)
            vec.push_back(i+1);
    }
    cout << vec.size() << endl;
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}
