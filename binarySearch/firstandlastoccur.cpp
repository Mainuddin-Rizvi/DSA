#include <iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key)
{
    int ans = -1;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOccurance(int arr[], int size, int key)
{
    int ans = -1;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int s;
    int even[6] = {2, 3, 3, 3, 3, 18};
    int odd[5] = {3, 8, 11, 14, 16};
    cout << "first occurance at " << firstOccurance(even, 6, 3) << " ";
    cout << "last occurance at " << lastOccurance(even, 6, 3);
}