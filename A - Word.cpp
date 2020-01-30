#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name;
    cin >> name;
    int upperCounter = 0;
    for(int i = 0; i < name.size(); i++)
    {
        if(name[i] < 91)
        {
            upperCounter++;
        }
    }
    if(upperCounter > name.size()/2)
    {
        for(int i = 0; i < name.size();i++)
        {
            cout << (char)toupper(name[i]);
        }
    }
    else
    {
        for(int i = 0; i < name.size();i++)
        {
            cout << (char)tolower(name[i]);
        }
    }
}
