#include <iostream>
#include <vector>
using namespace std;

void mergeArray(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {
        /* code */
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j < m)
    {
        /* code */
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}
void print(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        /* code */
        cout << arr[i] << ' ';
        i++;
    }
}
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {0};
    mergeArray(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);
    return 0;
}