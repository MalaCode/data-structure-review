#include <iostream>

using namespace std;

int main()
{
    int arr [7] = {3, 44, 38, 5, 47, 15, 36};
    int compPivotIndex = 0;
    int index;
    for (int i = 0; i < 7; i++)
    {
        index = i;
        // compPivotIndex = i + 1;
        for (int x = i + 1; x < 7; x++)
        {
            if (arr[x] < arr[i])
            {
                int z = arr[x];
                arr[x] = arr[index];
                arr[index] = z;
                index++;
            }
            
        }
        int y = arr[i];
        arr[i] = index - 1;
        arr[index] = y;
    }



    for (int j = 0; j < 7; j++)
    {
        cout << arr[j] << endl;
    }
    return 0;
}