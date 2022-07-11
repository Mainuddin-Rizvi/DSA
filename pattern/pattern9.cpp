#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, j, c = 65;
    cin >> n;
    while (i <= n)
    {
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
