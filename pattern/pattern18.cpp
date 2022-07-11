#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, j, s;
    cin >> n;
    while (i <= n)
    {
        j = 1, s = 1;
        while (s <= n - i)
        {
            cout << " ";
            s++;
        }

        while (j <= i)
        {
            cout << j << " ";
            j++;
        }
        j = i - 1;
        while (j >= 1)
        {
            cout << j << " ";
            j = j - 1;
        }
        cout << endl;
        i++;
    }
    return 0;
}
