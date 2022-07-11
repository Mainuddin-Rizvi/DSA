#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, j, c;
    cin >> n;
    while (i <= n)
    {

        j = 1;
        while (j <= n)
        {
            cout << (char)(65 + i - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
