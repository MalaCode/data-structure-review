#include <iostream>

using namespace std;

void swap (int arr [], int left, int right)
{
    int holder = arr[left];
    arr[left] = arr[right];
    arr[right] = holder;
}

void quickSort (int arr[], int right, int left)
{
    int pivot = arr[(right-left)/2];
    int l = left;
    int r = right;
    while (l <= r)
    {
        while (arr[l] < pivot)
        {
            l++;
        }
        while (arr[r] > pivot )
        {
            r--;
        }
        if (l <= r)
        {
            swap (arr[l], arr[r]);
            l++;
            r++;
        }
    }
    if (left < r)
    {
        quickSort(arr, r, left);
    }
    if (right > l)
    {
        quickSort(arr, right, l);
    }
}

int main()
{
    int arr [7] = {3, 44, 38, 5, 47, 15, 36};
    quickSort(arr, 6, 0);
        
    for (int j = 0; j < 7; j++)
    {
        cout << arr[j] << endl;
    }
  

    return 0;
}