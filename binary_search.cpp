#include <iostream>
using namespace std;
int binary_search(int arr[], int size, int key);
int main()
{
    int arr[20], i, key, size;
    cout << "Enter size of an array ";
    cin >> size;
    cout << "Enter elements" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "----Elements are----" << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nEnter elements to search ";
    cin >> key;
    int index = binary_search(arr, size, key);
    cout << index;
    return 0;
}
int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start+(end-start)/2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}
