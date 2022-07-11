#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, j, s;
    cin >> n;
    while (i <= n)
    {
        j = 1, s = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        j = j - 1;
        while (s <= (n - j) * 2)
        {
            cout << "*";
            s++;
        }
        while (j >= 1)
        {
            cout << j;
            j--;
        }

        cout << endl;
        i++;
    }
    return 0;
}
