#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h;
    scanf("%d %d", &n, &h);
    int item;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &item);
        if (item > h)
            counter++;
        counter++;
    }
    printf("%d", counter);
}
