#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        /* code */
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
int getLength(char name[])
{
    int i = 0, count = 0;

    while (name[i] != '\0')
    {
        i++;
        count++;
    }
    return count;
}

void reverseString(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        /* code */
        swap(name[s++], name[e--]);
    }
}
bool checkpalindromeString(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (name[s] >= ' ' && name[s] <= '@')
        {
            s++;
        }
        if (name[e] >= ' ' && name[e] <= '@')
        {
            e--;
        }
        /* code */
        if (toLowerCase(name[s++]) != toLowerCase(name[e--]))
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char name[20];

    cout << " enter name" << endl;
    cin >> name;
    int length = getLength(name);
    cout << "palindromeString or not " << checkpalindromeString(name, length);
    return 0;
}