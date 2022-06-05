#include <iostream>
using namespace std;

void merge(int arr[], int p, int mid, int r)
{
    int n1 = mid - p + 1;
    int n2 = r - mid;

    int LeftArray[n1], RightArray[n2];

    for (int i = 0; i < n1; i++)
        LeftArray[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        RightArray[j] = arr[mid + 1 + j];

    int i = 0;
    int j = 0;
    int k = p;

    while (i < n1 && j < n2)
    {
        if (LeftArray[i] <= RightArray[j])
        {
            arr[k] = LeftArray[i];
            i++;
        }
        else
        {
            arr[k] = RightArray[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = LeftArray[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = RightArray[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int p, int r)
{
    if (p < r)
    {
        int mid = (p + r) / 2;

        merge_sort(arr, p, mid);
        merge_sort(arr, mid + 1, r);
        merge(arr, p, mid, r);
    }
}

int main()
{
    int size, i, j, temp;

    cout << "Enter Size of Array : ";
    cin >> size;

    int a[size];

    cout << "Enter the Elements of Array : ";
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    merge_sort(a, 0, size - 1);

    cout << "Sorted Array : ";
    for (i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}