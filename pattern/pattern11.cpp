#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, j, c = 64;
    cin >> n;
    while (i <= n)
    {
        c++;
        j = 1;
        while (j <= i)
        {
            cout << (char)(c) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
