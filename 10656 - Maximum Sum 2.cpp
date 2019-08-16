#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, item;
    cin >> n;
    vector <int> vec;
    while (n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> item;
            if (item != 0)
                vec.push_back(item);
        }
        if (vec.size() == 0)
            cout << 0 << endl;
        else
        {
            for (int i = 0; i < vec.size()-1; i++)
                cout << vec[i] << " ";
            cout << vec[vec.size()-1] << endl;
        }

        cin >> n;
        vec.clear();

    }
}
