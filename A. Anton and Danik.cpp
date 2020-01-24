#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string row;
    cin >> n >> row;
    int counter = 0;
    //anton > 0
    //tie   = 0
    //danik < 0
    char c;
    for(int i = 0; i < n; i++)
    {
        c = row[i];
        //cout << c;
        if (c == 'A')
            counter++;
        else
            counter--;
    }
    if (counter > 0)
        printf("Anton");
    else if (counter == 0)
        printf("Friendship");
    else
        printf("Danik");
}














