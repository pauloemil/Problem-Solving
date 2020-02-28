#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    //freopen("input.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;
    int cases = 1;

    while(n--)
    {
        int arr[26] = {0};
        int r, c, m, n;
        cin >> r >> c >> m >> n;
        string item;
        int maxi = 0;
        int maxinumber = 0;
        for(int i = 0; i < r; i++)
        {
            cin >> item;
            for(int j = 0; j < c; j++)
            {
                int ind = (int)(item[j] - 'A');
                arr[ind]++;
                if (arr[ind] > maxi)
                {
                    maxi = arr[ind];
                    maxinumber = arr[ind];
                }
                else if (arr[ind] == maxi)
                    maxinumber+= arr[ind];
            }
        }
        //cout << maxinumber << " " << m << " " <<(r*c-maxinumber)<<" " << n << endl;
        cout << "Case " << cases++ << ": " << (maxinumber*m + (r*c-maxinumber)*n) << endl;
    }

}
