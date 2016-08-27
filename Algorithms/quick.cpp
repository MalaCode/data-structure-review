#include <iostream>

using namespace std;

void swap (int &left, int &right)
{
    int holder = left;
    left = right;
    right = holder;
}

int main()
{
    int arr [7] = {3, 44, 38, 5, 47, 15, 36};
    int pivot = 0;
    int index = 0;
    for (int i = 0; i < 7; i++)
    {
        pivot = arr[i];
        index = i + 1;
        for (int x = i + 1; x < 7; x++)
        {
            if (arr[x] < arr[i])
            {
                swap(arr[x], arr[index]);
                index++;
            }
            
        }
        index--;
        swap(arr[i], arr[index]);
    }



    for (int j = 0; j < 7; j++)
    {
        cout << arr[j] << endl;
    }
  

    return 0;
}