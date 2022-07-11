#include <iostream>
using namespace std;
int main()
{
    int n, row = 1, col;
    cin >> n;
    while (row <= n)
    {
        col = 1;
        while (col <= n - row + 1)
        {
            cout << "* ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
