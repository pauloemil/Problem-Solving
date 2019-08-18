#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int m, n, i, j, Mcounter, Gcounter;
    long long item;
    //freopen("input.in", "r", stdin);
    vector<long long> heads, talls;
    bool printed;
    cin >> n >> m;
    while (n || m)
    {
        printed = false;

        //int diameters[n], talls[m];
        for (i = 0; i < n; i++)
        {
            cin >> item;
            heads.push_back(item);
        }
        for (i = 0; i < m; i++)
        {
            cin >> item;
            talls.push_back(item);
        }
        if (n > m){
            printed = true;
        }
        sort(heads.begin(), heads.end());
        sort(talls.begin(), talls.end());
        Gcounter = 0;
        Mcounter = 0;
        for (i = 0; i < heads.size(); i++)
        {
            for (j = 0; j < talls.size(); j++)
            {
                //cout << i << " " << j << " " << Mcounter << endl;
                if (heads[i] <= talls[j])
                {
                    Mcounter++;
                    Gcounter += talls[j];
                    talls.erase(talls.begin() + j);
                    break;
                }
            }
        }


        /*cout << endl;
        for (int i = 0; i < talls.size(); i++)
            cout << talls[i] << " ";
        cout << endl;
        for (int i = 0; i < heads.size(); i++)
            cout << heads[i] << " ";
        cout << endl;
        cout << endl;*/


        if (Mcounter == n && !printed){
            printf("%d\n", Gcounter);

        }

        else{
            printf("Loowater is doomed!\n");

        }

        talls.clear();
        heads.clear();
        cin >> n >> m;
    }
}
