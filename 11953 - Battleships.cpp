#include<iostream>
//#include<algorithm>
#include <vector>
//#include <queue>
//#include<bits/stdc++.h>

using namespace std;
bool vis[100][100];
char arr[100][100];

int ru, cu;
void recu(int r, int c)
{
    if (r > ru-1 || r < 0 || c > cu-1 || c < 0 || arr[r][c] == '.' || vis[r][c] == 1)
        return;
    vis[r][c] = 1;
    recu(r-1, c);
    recu(r+1, c);
    recu(r, c-1);
    recu(r, c+1);
}

int main()
{
    //freopen("input.in", "r", stdin);
    int turns, input;
    string item;
    vector<pair<int, int>> axis;

    cin >> turns;
    int counter = 0;
    while(turns--)
    {
        counter ++;
        cin >> input;
        ru = input;
        cu = input;
        // reseting:-
        for(int i = 0; i < input; i++)
            for(int j = 0; j < input; j++)
                vis[i][j] = 0;
        axis.clear();
        int shipsCounter = 0;

        for(int i = 0; i < input; i++)
        {
            cin >> item;
            for(int j = 0; j < input; j++)
            {
                arr[i][j] = item[j];
                if(item[j] == 'x')
                    axis.push_back(make_pair(i, j));
            }
        }
        for (auto elem : axis)
        {
            if (vis[elem.first][elem.second] != 1)
            {

                recu(elem.first, elem.second);
                shipsCounter++;
            }
        }
        cout << "Case " << counter << ": " << shipsCounter << endl;
        /*
        for(int i = 0; i < input; i++)
            {
                for(int j = 0; j < input; j++)
                    cout << vis[i][j] << " ";
                cout << endl;
            }
        */
        /*
        for (auto elem : axis)
            cout << elem.first << " " << elem.second << endl;
        for(int i = 0; i < input; i++)
        {
            for(int j = 0; j < input; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        */

    }
}
