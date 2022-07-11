#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, j, c;
    cin >> n;
    while (i <= n)
    {
        j = i;
        while (j < i * 2)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
