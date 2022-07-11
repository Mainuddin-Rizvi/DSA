#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, j;
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            if (n - j + 1 > i)
            {
                /* code */
                cout << " ";
            }
            else
            {
                cout << "*";
            }

            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
