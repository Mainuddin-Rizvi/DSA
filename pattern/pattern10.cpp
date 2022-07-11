#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, j, c;
    cin >> n;
    while (i <= n)
    {
        c = 65 + i - 1;
        j = 1;
        while (j <= n)
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
