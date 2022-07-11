#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, j, s, c = 1;
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
            cout << c++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
