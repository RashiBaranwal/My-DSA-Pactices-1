#include <iostream>
using namespace std;
int main()
{
    int n, s, i, j;
    cout << "Enter number of rows: ";
    cin >> n;
    i = 0;
    while (i <= n)
    {
        s = n;
        while (s > i)
        {
            cout << " ";
            s--;
        }
        j = 0;
        while (j < i)
        {
            cout << "* ";
            j++;
        }
        cout << "\n";
        i++;
    }

    i = 1;
    while (i < n)
    {
        s = 0;
        while (s <i)
        {
            cout << " ";
            s++;
        }
        j = n;
        while (j < i)
        {
            cout << "* ";
            j--;
        }
        cout << "\n";
        i++;
    }
    return 0;
}
