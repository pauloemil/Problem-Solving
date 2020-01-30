#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool checked[26] = {0};
    string name;
    cin >> name;
    int counter = 0;
    for(int i = 0 ; i < name.size();i++)
    {
        if (checked[name[i]-97] == 0)
        {
            checked[name[i]-97] = 1;
            counter++;
        }
    }
    if(counter % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}
