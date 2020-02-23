#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("tabs.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, k;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> k;
        vector< pair<int, int> > vec;
        int x, y;
        for(int j = 0; j < k; j++)
        {
            cin >> x >> y;
            vec.push_back(make_pair(x, (-y)));
        }
        sort(vec.begin(), vec.end());

        for(int j = 0; j < k; j++)
        {
            pair<int, int> elem = vec[j];
            printf("%d %d\n", elem.first, -elem.second);
        }
    }


}
