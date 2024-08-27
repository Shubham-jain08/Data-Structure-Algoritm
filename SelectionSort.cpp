#include <iostream>
using namespace std;
int selection_sort(int arr[], int n);
int print_array(int arr[],int n);
int main()
{
    int i, n, j;
    int arr[20];
    cout << "Enter size of array:  ";
    cin >> n;
    cout << "Enter " << n << " elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Entered elements are" << endl
         << "----------------" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    selection_sort(arr, n);
    print_array(arr,n);
    return 0;
}
int selection_sort(int arr[], int n)
{
    int i, j, small;
    for (i = 0; i < n-1; i++)
    {
        small = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[small])
            {
                small = j;
            }
        }
        int temp = arr[small];
        arr[small] = arr[i];
        arr[i] = temp;
    }
    
}
int print_array(int arr[],int n)
{
    cout<<"Sorted element\n-------------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}