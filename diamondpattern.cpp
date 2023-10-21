#include <bits/stdc++.h>
using namespace std;

void Triangle(int n)
{
    int i, j, space;
    space = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= space; j++)
            cout << " ";
        space--;
        for (j = 1; j <= (2 * i - 1); j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    space = 1;
    for (i = 1; i <= (n - 1); i++)
    {
        for (j = 1; j <= space; j++)
            cout << " ";
        space++;
        for (j = 1; j <= (2 * (n - i) - 1); j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}

int main()
{
    Triangle(4);
    return 0;
}
