#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, j, c;
    cin >> n;
    while (i <= n)
    {
        c = 65 + n - i;
        j = 1;
        while (j <= i)
        {
            cout << (char)(c) << " ";
            c++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
