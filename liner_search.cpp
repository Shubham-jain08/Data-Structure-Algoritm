#include <iostream>
using namespace std;
int ls(int arr[], int ele, int n);
int main()
{
    int arr[20], i, s, n, ele;
    cout << "Enter size";
    cin >> n;
    arr[n];
    cout << "Enter " <<n<< " elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements are : : >" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nEnter elements to search:";
    cin >> ele;
    ls(arr, ele, n);
}
int ls(int arr[], int ele, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            cout << i;
        }
    }
}