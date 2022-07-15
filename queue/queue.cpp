#include <iostream>
using namespace std;
#include <queue>
int main()
{
    queue<int> q;
    q.push(5);
    q.push(7);
    q.push(8);
    q.push(9);
    cout << q.size() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}