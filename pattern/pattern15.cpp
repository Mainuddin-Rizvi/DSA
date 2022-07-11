#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, j, s;
    cin >> n;
    while (i <= n)
    {
        j = 1, s = 1;
        while (s < i)
        {
            cout << " ";
            s++;
        }

        while (j <= n - i + 1)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
